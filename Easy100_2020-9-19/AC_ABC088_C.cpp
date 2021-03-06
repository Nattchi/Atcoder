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
    ll x, y; cin >> x >> y;
    ll ans = 0;

    while(x <= y){
        ans++;
        x *= 2;
    }
    cout << ans << endl;
}