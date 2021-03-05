#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>
#include <cmath>
#include <queue>

using namespace std;
using ll = long long;
#define rep(i,n) for(ll i=0;i<ll(n);i++)

int main(){
    ll n, m; cin >> n;
    map<string, ll> mp;
    vector<string> s(n);
    rep(i, n) {
        cin >> s[i];
        mp[s[i]]++;
    }
    cin >> m;
    vector<string> t(m);
    rep(i, m) {
        cin >> t[i];
        mp[t[i]]--;
    }

    ll x = 0;
    for(auto one : mp){
        x = max(x, one.second);
    }
    cout << x << endl;
}