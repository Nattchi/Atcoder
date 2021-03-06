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
    ll n; cin >> n;
    vector<ll> a(n);
    ll ans = 0;
    ll before = 0;
    ll after = 0;
    ll sum = 0;
    rep(i, n) {
        cin >> a[i];
        before += (a[i] * a[i]);
        sum += a[i];
    }

    for (int i = 0; i < n-1; ++i) {
        sum -= a[i];
        after += a[i] * sum;
    }

    ans = (n - 1) * before - 2 * after;
//    cout << before << ", " << after << endl;
    cout << ans << endl;
}