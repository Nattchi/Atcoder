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
    ll r, g, b, n; cin >> r >> g >> b >> n;
    ll ans = 0;
    for (ll i = 0; i <= n; i += r) {
        for (ll j = 0; j <= n; j += g){
            ll rest = (n - i - j);
            if((i >= 0 && j >= 0 && rest >= 0) && rest % b == 0) {
                ans++;
//                printf("%lld, %lld, %lld\n", i, j, (n - i - j) / b);
            }
        }
    }
    cout << ans << endl;
}