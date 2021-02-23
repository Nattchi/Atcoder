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
#define rep(i,n) for(ll i=1;i<=ll(n);i++)

int main(){
    ll n; cin >> n;
    vector<ll> a(n+2); vector<ll> b(n+1);
    rep(i, n+1) cin >> a[i];
    rep(i, n) cin >> b[i];

    ll ans = 0;
    for (int i = n; i > 0; --i) {
        if(a[i+1] > b[i]){
            a[i+1] -= b[i];
            ans += b[i];
            b[i] = 0;
        }else{
            ans += a[i+1];
            b[i] -= a[i+1];
            a[i+1] = 0;
            if(a[i] > b[i]){
                a[i] -= b[i];
                ans += b[i];
                b[i] = 0;
            }else{
                ans += a[i];
                b[i] -= a[i];
                a[i] = 0;
            }
        }
    }
    cout << ans << endl;
}