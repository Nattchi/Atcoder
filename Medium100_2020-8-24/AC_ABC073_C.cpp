#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>

using namespace std;
using ll = long long;

int main(){
    ll n; cin >> n;
    vector<ll> a(n+1);
    map<ll, bool> onoff;

    for (ll i = 1; i <= n; i++) {
        cin >> a[i];
        onoff[a[i]] = false;
    }

    for (ll i = 1; i <= n; i++){
        onoff[a[i]] = !onoff[a[i]];
    }
    ll ans = 0;
    for (auto m : onoff){
        if(m.second) ans++;
    }
    cout << ans << endl;
}