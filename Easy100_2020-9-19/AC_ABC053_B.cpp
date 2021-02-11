#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>

using namespace std;

int main(){
    string s; cin >> s;
    int n = s.size();
    int a_idx, z_idx;
    for(int i = 0; i < n; i++){
        if(s[i] == 'A') {
            a_idx = i;
            break;
        }
    }
    for(int i = n-1; i >= 0; i--){
        if(s[i] == 'Z') {
            z_idx = i;
            break;
        }
    }
    int ans = z_idx - a_idx + 1;
    cout << ans << endl;
}