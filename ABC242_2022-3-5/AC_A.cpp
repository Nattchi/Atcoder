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
    ld a, b, c, x; cin >> a >> b >> c >> x;

    ld ans = 0;
    if(x <= a){
        ans = 1;
    }else if(x <= b){
        ans = c / (b - a);
    }
    printf("%.10Lf", ans);
}