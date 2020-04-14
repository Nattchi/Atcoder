#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
//等間隔ではないRGB の位置の組
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
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> rpos = search(s, "R");
    vector<int> gpos = search(s, "G");
    vector<int> bpos = search(s, "B");
    int dis_kj, dis_ji;
    int count = 0;
    for (int r = 0; r < rpos.size(); r++){
        for (int g = 0; g < gpos.size(); g++){
            for (int b = 0; b < bpos.size(); b++){
                vector<int> pos = {rpos[r], gpos[g], bpos[b]};
                sort(pos.begin(), pos.end());
                dis_kj = pos[2] - pos[1];//k > j > i
                dis_ji = pos[1] - pos[0];
                if(dis_kj != dis_ji){
                    count++;
                }
            }
        }
    }
    cout << count << endl;
}
