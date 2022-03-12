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
    ll v, a, b, c; cin >> v >> a >> b >> c;
    string ans;
    while(true){
        if(v < a){
            ans = "F";
            cout << ans << endl;
            return 0;
        }
        v -= a;
        if(v < b){
            ans = "M";
            cout << ans << endl;
            return 0;
        }
        v -= b;
        if(v < c){
            ans = "T";
            cout << ans << endl;
            return 0;
        }
        v -= c;
    }
}