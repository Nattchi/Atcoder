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
    ll n; cin >> n;
    vector<vector<ll> > a(3, vector<ll>(n+1));
    vector<ll> first(n+1); vector<ll> second(n+1);

    rep(i, 2) {
        rep(j, n) {
            cin >> a[i][j];
            if(i == 1) first[j] += (a[i][j] + first[j-1]);
            else second[j] += (a[i][j] + second[j-1]);
        }
    }
    ll ans = 0;
    rep(i, n){
        ans = max(first[i] + (second[n] - second[i-1]), ans);
    }
    cout << ans << endl;
}
