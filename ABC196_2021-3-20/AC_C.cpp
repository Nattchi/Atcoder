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
    string s; cin >> s;
    ll n = stoll(s);
    ll n_size = s.size();
    ll ans = 0;

    if(n_size >= 2) {
        for (ll i = 2; i <= n_size; i += 2) {
            if(n_size == i){
                bool process = true;
                ll j = pow(10, n_size/2-1);
                while (process){
                    string t = to_string(j);
                    t += t;
                    ll m = stoll(t);
                    if(m > n){
                        process = false;
                        break;
                    }
                    j++;
                    ans++;
                }
            }else{
                ans += 9 * pow(10, i/2-1);
            }
        }
    }
    cout << ans << endl;
}