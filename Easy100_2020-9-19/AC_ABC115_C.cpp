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
    ll n, k; cin >> n >> k;
    vector<ll> h(n+1);
    rep(i, n) {
        cin >> h[i];
    }
    sort(h.begin(), h.end());

    ll ans = 10000000000000000;
    for (int i = 1; i <= n+1-k; ++i) {
        ans = min(ans, h[k-1+i] - h[i]);
    }
    cout << ans << endl;
}