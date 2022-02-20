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
#include <stack>

using namespace std;
using ll = long long;
using ld = long double;
#define rep(i, n) for(ll i=0;i<ll(n);i++)
#define REP(i, s, n) for(ll i=(ll)(s);i<(ll)(n);i++)

int main() {
    ll n; cin >> n;
    vector<ll> a(n); rep(i, n) cin >> a[i];

    ll count = 0;
    stack<pair<ll, ll> > st;
    rep(i, n){
        count++;
        if(st.empty() || st.top().first != a[i]){
            st.push(make_pair(a[i], 1));
        }else{
            st.top().second++;
            if(st.top().first == st.top().second) {
                count -= a[i];
                st.pop();
            }
        }
        cout << count << endl;
    }
}