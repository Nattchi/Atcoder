#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>
#include <cmath>
#include <queue>

using namespace std;
using ll = long long;
#define rep(i,n) for(ll i=0;i<ll(n);i++)

int main(){
    string s; ll k; cin >> s >> k;

    string ans;
    ll one_last = 0;
    for (size_t i = 0; i < s.size(); ++i) {
        if(s[i] != '1'){
            if(k >= 1) {
                ans += s[i];
                break;
            }
        }else{
            one_last++;
        }
    }
    if(one_last >= k) ans = "1";
    cout << ans << endl;
}