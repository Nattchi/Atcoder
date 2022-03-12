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
const ll MOD = 998244353;
#define rep(i, n) for(ll i=0;i<ll(n);i++)
#define REP(i, s, n) for(ll i=(ll)(s);i<(ll)(n);i++)


int main(){
    int n;
    cin >> n;
    vector<vector<ll> > dp(n+1, vector<ll>(10));

    for(int i=1;i<=9;i++){dp[1][i]=1;}
    for(int d=2;d<=n;d++){
        for(int i=1;i<=9;i++){
            for(int j=max(1,i-1);j<=min(9,i+1);j++){
                dp[d][j]+=dp[d-1][i];
                dp[d][j]%=MOD;
            }
        }
    }
    int res=0;
    for(int i=1;i<=9;i++){
        res+=dp[n][i];
        res%=MOD;
    }
    cout << res << '\n';
    return 0;
}