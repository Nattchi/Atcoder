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
    vector<ll> x(n); vector<ll> y(n);
    rep(i, n) cin >> x[i] >> y[i];
    string s; cin >> s;

    typedef pair<ll, pair<string, pair<ll, ll> > > person;
    typedef multimap<ll, person> mc;
    mc people;

    rep(i, n){
        person p = make_pair(i, make_pair(string{s[i]}, make_pair(x[i], y[i])));
        people.emplace(y[i], p);
    }
    for(auto itr = people.begin(), end = people.end(); itr != end; itr = people.upper_bound(itr->first)){
//        cout << itr->first << endl;

        auto co = people.equal_range(itr->first);
        set<string> st;
        ll min_x = -1; ll max_x = 1000000000000;
        for (auto it = co.first; it != co.second; ++it){
            st.insert(it->second.second.first);
            if(it->second.second.first == "L"){
                min_x = max(min_x, it->second.second.second.first);
            }else{
                max_x = min(max_x, it->second.second.second.first);
            }
        }
        if(st.size() >= 2){
            if(min_x >= max_x) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;

}