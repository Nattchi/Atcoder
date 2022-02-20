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
    ll n, x; cin >> n >> x;
    vector<ll> a(n+1); vector<ll> b(n+1); rep(i, n) cin >> a[i] >> b[i];

    vector<vector<bool> > dp(n+1, vector<bool>(x+1));
    dp[0][0] = true;
    REP(i, 0, n){
        REP(j, 0, x+1){
            if(dp[i][j] && j + a[i] <= x) dp[i+1][j+a[i]] = true;
            if(dp[i][j] && j + b[i] <= x) dp[i+1][j+b[i]] = true;
        }
    }
    bool possible = dp[n][x];
    if (possible) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

}