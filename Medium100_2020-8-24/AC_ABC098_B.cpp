#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#include <utility>

using namespace std;

int main(){
    int n;
    string s;
    cin >> n >> s;

    int max_match = 0;

    for(int i = 1; i <= s.size(); i++){
        set<char> match_str;
        string x = s.substr(0, i);
        string y = s.substr(i);
        for(size_t j = 0; j < x.size(); j++){
            auto itr = find(y.begin(), y.end(), x[j]);
            if(itr != y.end()) match_str.insert(*itr);
            max_match = max((int)match_str.size(), max_match);
        }
    }
    cout << max_match << endl;
}