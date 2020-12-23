#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>

using namespace std;

int main(){
    string s;
    cin >> s;

    int match_even = 0; // 0101.. と比較
    for(size_t i = 0; i < s.size(); i++){
        if(i % 2 == 0){
            if(s[i] == '0') match_even++;
        }else{
            if(s[i] == '1') match_even++;
        }
    }

    int ans = min(match_even, ((int)s.size() - match_even));
    cout << ans << endl;
}