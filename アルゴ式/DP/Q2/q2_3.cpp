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
    vector<vector<ll> > a(n, vector<ll>(3));
    rep(i, n) rep(j, 3) cin >> a[i][j];
    vector<vector<ll> > salary(n, vector<ll>(3));
    salary[0][0] = a[0][0]; salary[0][1] = a[0][1]; salary[0][2] = a[0][2];

    REP(i, 1, n){
        salary[i][0] = max(salary[i-1][1], salary[i-1][2]) + a[i][0];
        salary[i][1] = max(salary[i-1][0], salary[i-1][2]) + a[i][1];
        salary[i][2] = max(salary[i-1][0], salary[i-1][1]) + a[i][2];
    }
    ll ans = max(salary[n-1][0], max(salary[n-1][1], salary[n-1][2]));
    cout << ans << endl;
}