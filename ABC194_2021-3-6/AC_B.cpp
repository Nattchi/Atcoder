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
    vector<ll> a(n); vector<ll> b(n); vector<ll> c(n);
    rep(i, n) {
        cin >> a[i] >> b[i];
        c[i] = a[i] + b[i];
    }
    vector<ll> d = a; vector<ll> e = b;
    sort(d.begin(), d.end()); sort(e.begin(), e.end());
    auto a_itr = min_element(a.begin(), a.end());
    auto b_itr = min_element(b.begin(), b.end());
    ll ans = max(*a_itr, *b_itr);
    if(a_itr - a.begin() == b_itr - b.begin()){
        ans = min(max(d[0], e[1]), max(e[0], d[1]));
    }
    ans = min(ans, *min_element(c.begin(), c.end()));

    cout << ans << endl;
}