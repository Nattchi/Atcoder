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
    ld x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
    bool possible = false;
    ld min_x = min(x1, x2); ld max_x = max(x1, x2);
    ld min_y = min(y1, y2); ld max_y = max(y1, y2);
    set<pair<ll, ll>> left; set<pair<ll, ll>> right;
    REP(i, min_x-5, min_x+5) {
        REP(j, min_y - 5, min_y + 5) {
            if(abs(i-min_x)*abs(i-min_x)+abs(j-min_y)*abs(j-min_y) == 5){
                left.insert(make_pair(i, j));
            }
        }
    }
    REP(i, max_x-5, max_x+5) {
        REP(j, max_y - 5, max_y + 5) {
            if(abs(i-max_x)*abs(i-max_x)+abs(j-max_y)*abs(j-max_y) == 5){
                if(left.count(make_pair(i, j))) possible = true;
            }
        }
    }

    if (possible) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}