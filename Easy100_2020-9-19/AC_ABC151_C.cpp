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
#define rep(i,n) for(ll i=1;i<=ll(n);i++)

int main(){
    ll n, m; cin >> n >> m;
    vector<ll> p(m+1); vector<string> s(m+1);
    vector<ll> penalty(n+1);
    ll ac = 0; ll pe = 0;
    set<ll> cleared;
    rep(i, m) {
        cin >> p[i] >> s[i];
        if(s[i] == "WA") {
            penalty[p[i]]++;
        }else{
            if(!cleared.count(p[i])){
                ac++;
                pe += penalty[p[i]];
                cleared.insert(p[i]);
            }
        }
    }
    cout << ac << " " << pe << endl;
}