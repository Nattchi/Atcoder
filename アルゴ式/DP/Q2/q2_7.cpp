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
const ll INF = 1000000000;

int main() {
    ll n; cin >> n;
    vector<vector<ll>> a(n, vector<ll>(n));
    rep(i, n) rep(j, n) cin >> a.at(i).at(j);
    vector<vector<ll> > dp(n, vector<ll>(n, INF));
    dp[0][n-1] = a[0][n-1];

    for (int i = 0; i < n; ++i) {
        for (int j = n-1; j >= 0; --j) {
            // 上から来る場合
            if (i - 1 >= 0) dp[i][j] = min(dp[i][j], dp[i-1][j] + a[i][j]);

            // 右から来る場合
            if (j + 1 < n) dp[i][j] = min(dp[i][j], dp[i][j+1] + a[i][j]);
        }
    }
    cout << dp[n-1][0] << endl;
}