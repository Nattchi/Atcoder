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
    ll n, x, y; cin >> n >> x >> y;
    vector<ll> a(n); a[0] = x; a[1] = y;
    REP(i, 2, n){
        a[i] = (a[i-1]+a[i-2]) % 100;
    }
    cout << a[n-1] << endl;
}