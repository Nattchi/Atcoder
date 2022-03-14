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
#define rep(i,n) for(ll i=0;i<ll(n);i++)
#define REP(i,s,n) for(ll i=(ll)(s);i<(ll)(n);i++)

int main(){
    ll n; cin >> n;
    vector<ll> dp(n+3);
    dp[1] = 1; dp[2] = 2; dp[3] = 4;
    REP(i, 4, n+1){
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
    }
    cout << dp[n] << endl;
}