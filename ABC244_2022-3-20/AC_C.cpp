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
    set<ll> st;
    for(int i =2; i <= 2*n+1; i++) st.insert(i);
    cout << 1 << endl << std::flush;

    while(true){
        ll x; cin >> x;
        if(x == 0) {
            return 0;
        }
        st.erase(x);
        auto itr = st.begin();
        cout << *itr << endl << std::flush;
        st.erase(*itr);
    }
}