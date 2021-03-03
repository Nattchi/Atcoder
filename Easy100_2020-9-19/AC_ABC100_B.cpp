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
    ll d, n; cin >> d >> n;
    ll ans;
    if(d == 0){
        ans = n;
        if(n == 100) ans++;
    }else if(d == 1){
        ans = n * 100;
        if(n == 100) ans += 100;
    }else{
        ans = n * 10000;
        if(n == 100) ans += 10000;
    }
    cout << ans << endl;
}