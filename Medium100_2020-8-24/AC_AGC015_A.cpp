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
    ll n, a, b; cin >> n >> a >> b;
    ll ans = 0;

    if(a == b || (a < b && n > 1)){
        for (ll i = (n - 1)*a + b; i <= a+(n-1)*b; ++i) {
            ans++;
        }
    }
    cout << ans << endl;
}