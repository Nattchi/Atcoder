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
    vector<vector<ll> > dp(n, vector<ll>(n));
    rep(i, n){
        dp[i][0] = 1;
        dp[0][i] = 1;
    }

    REP(i, 1, n){
        REP(j, 1, n){
            dp[i][j] = dp[i-1][j] + dp[i][j-1];
        }
    }
    cout << dp[n-1][n-1] << endl;
}