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
    ll q, h, s, d, n; cin >> q >> h >> s >> d >> n;

    ll double_min = min({q * 8, h * 4, s * 2, d});
    ll single_min = min({q * 4, h * 2, s});
    ll ans = 0;

    if(n % 2 == 0){
        ans = double_min * (n / 2);
    }else{
        if(n > 1){
            ans = min(double_min * (n / 2), single_min * (n / 2) * 2);
        }
        ans += single_min;
    }
    cout << ans << endl;
}