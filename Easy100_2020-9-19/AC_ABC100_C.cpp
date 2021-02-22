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
    vector<ll> a(n+1);
    ll ans = 0;
    rep(i, n) {
        cin >> a[i];
        if(a[i] % 2 == 0){
            while(a[i] % 2 == 0){
                a[i] /= 2;
                ans++;
            }
        }
    }
    cout << ans << endl;
}