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
    vector<vector<ll>> a(n, vector<ll>(n)); rep(i, n) cin >> a[0][i];

    REP(i, 1, n){
        rep(j, n){
            if(j-1 >= 0) a[i][j] += a[i-1][j-1];
            a[i][j] += a[i-1][j];
            if(j+1 < n) a[i][j] += a[i-1][j+1];
            a[i][j] %= 100;
        }
    }
    cout << a[n-1][n-1] << endl;
}