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
    ll n, m; cin >> n >> m;
    vector<ll> d(m); rep(i, m) cin >> d[i];
    vector<bool> dp(n+30); dp[0] = true;
    bool possible = false;

    rep(i, n+30){
        if(dp[i]){
            rep(j, m) dp[i+d[j]] = true;
        }
    }

    if (dp[n]) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}