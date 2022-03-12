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
    vector<ll> a(n+1); REP(i, 1, n+1) cin >> a[i];
    vector<ll> b(n+1); REP(i, 1, n+1) cin >> b[i];
    ll equal = 0; ll ans = 0;

    REP(i, 1, n+1){
        if (a[i] == b[i]) equal++;
        auto result = find(b.begin(), b.end(), a[i]);

        if(result == b.end()){

        }else{
            if(i != distance(b.begin(), result)) ans++;
        }
    }
    cout << equal << endl;
    cout << ans << endl;
}