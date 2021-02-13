#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>

using namespace std;

int main(){
    int n; cin >> n;
    map<string, int> m;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if(m.count(s)){
            m[s]++;
        }else{
            m.emplace(s, 1);
        }
    }
    int ans = 0;
    for (auto itr = m.begin(); itr != m.end(); itr++){
        ans = max(ans, itr->second);
    }
    for (auto itr = m.begin(); itr != m.end(); itr++){
        if (ans == itr->second) cout << itr->first << endl;
    }
}