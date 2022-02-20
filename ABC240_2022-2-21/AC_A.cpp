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
    ll a, b; cin >> a >> b;
    bool connect = false;

    if(a == 1){
        if(b == 10 || b == 2) connect = true;
    }else if(a == 10){
        if(b == 1 || b == 9) connect = true;
    }else{
        if(b == a-1 || b == a + 1) connect = true;
    }
    if (connect) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}