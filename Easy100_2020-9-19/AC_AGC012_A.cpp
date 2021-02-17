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
    vector<ll> a(3*n+1);
    rep(i, 3*n) cin >> a[i];
    sort(a.rbegin(), a.rend());

    ll ans = 0;
    for (int i = 0; i < 2 * n; i += 2) {
        ans += a[i+1];
    }
    cout << ans << endl;
}