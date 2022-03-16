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
    vector<vector<ll>> a(n, vector<ll>(n));
    rep(i, n) rep(j, n) cin >> a[i][j];
    vector<vector<ll> > dp(n, vector<ll>(n));
    dp[0][0] = a[0][0];

    rep(i, n-1) {
        dp[0][i+1] = dp[0][i] + a[0][i+1];
        dp[i+1][0] = dp[i][0] + a[i+1][0];
    }

    REP(i, 1, n){
        REP(j, 1, n){
            dp[i][j] = max(dp[i-1][j]+a[i][j], dp[i][j-1]+a[i][j]);
        }
    }
    cout << dp[n-1][n-1] << endl;
}