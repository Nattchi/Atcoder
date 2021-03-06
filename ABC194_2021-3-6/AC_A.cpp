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
    ll a, b; cin >> a >> b;
    ll ans = 4;
    if(a + b >= 15 && b >= 8){
        ans = 1;
    }else if(a + b >= 10 && b >= 3){
        ans = 2;
    }else if(a + b >= 3){
        ans = 3;
    }
    cout << ans << endl;
}