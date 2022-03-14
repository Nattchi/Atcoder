#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>
#include <cmath>
#include <queue>
#include <deque>

using namespace std;
using ll = long long;
using ld = long double;
#define rep(i, n) for(ll i=0;i<ll(n);i++)
#define REP(i, s, n) for(ll i=(ll)(s);i<(ll)(n);i++)

int main() {
    ll n; cin >> n;
    vector<ll> a(n); rep(i, n) cin >> a[i];
    vector<ll> dp(n); REP(i, 2, n) dp[i] = 10000000000;
    dp[1] = a[1];

    REP(i, 2, n){
        dp[i] = min(dp[i-1]+a[i], dp[i-2]+2*a[i]);
    }

    cout << dp[n-1] << endl;
}