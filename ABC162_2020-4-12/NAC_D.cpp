#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
//等間隔ではないRGB の位置の組
/*
「S[i], S[j], S[k] が異なる」という条件を満たすものすべてから、
「S[i], S[j], S[k] が異なる」かつ「j - i = k - jである」という条件を満たすものを引く
 i, j (i < j) を固定すると k = 2j - i
と決まるので (この時点で k >= N の場合はダメ) S[i], S[j], S[k]
が互いに異なるならばカウントする
*/
vector<int> search(string s, string find_word){
    vector<int> positions;
    std::string::size_type pos = s.find(find_word);
    while (pos != std::string::npos) {
        positions.emplace_back(pos);
        //std::cout << pos << std::endl;
        pos = s.find(find_word, pos + find_word.length());
    }
    return positions;
}

int main(){
    int n, k;
    cin >> n;
    string s;
    cin >> s;

    vector<int> rpos = search(s, "R");
    vector<int> gpos = search(s, "G");
    vector<int> bpos = search(s, "B");
    long long count = 0;
    long long first_conditions = rpos.size() * gpos.size() * bpos.size();
    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            if(s[i] == s[j]) continue;
            k = 2 * j - i;
            if(k >= n || s[j] == s[k] || s[i] == s[k]) continue;
            count++;
        }
    }
    cout << first_conditions - count << endl;
}