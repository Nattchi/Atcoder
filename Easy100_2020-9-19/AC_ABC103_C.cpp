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
using ll = unsigned long long;
#define rep(i,n) for(ll i=0;i<ll(n);i++)

int main(){
    ll n; cin >> n;
    vector<ll> a(n);
    ll ans = 0;
    rep(i, n) {cin >> a[i]; ans += a[i];}
    cout << ans - n << endl;
}