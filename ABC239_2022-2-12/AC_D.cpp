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

bool is_prime(long long N) {
    if (N == 1) return false;
    for (long long i = 2; i * i <= N; ++i) {
        if (N % i == 0) return false;
    }
    return true;
}

int main() {
    ll a, b, c, d; cin >> a >> b >> c >> d;
    set<ll> st; set<ll> prime_st;
    bool possible = false;

    REP(i, a, b+1){
        bool t_win = true;
        REP(j, c, d+1){
            t_win = t_win && !is_prime(i+j);
//            cout << i + j << endl;
        }
        if(t_win) possible = true;
        if(possible) break;
    }

    if (possible) {
        cout << "Takahashi" << endl;
    } else {
        cout << "Aoki" << endl;
    }
}