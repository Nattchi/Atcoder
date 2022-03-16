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
    vector<string> s(n); rep(i, n) cin >> s[i];
    vector<vector<ll> > dp(n, vector<ll>(n));
    dp[0][0] = 1;

    rep(i, n){
        rep(j, n){
            if(i+1<n && s[i][j] == '.') dp[i+1][j] += dp[i][j];
            if(j+1<n && s[i][j] == '.') dp[i][j+1] += dp[i][j];
        }
    }
    cout << dp[n-1][n-1] << endl;
}