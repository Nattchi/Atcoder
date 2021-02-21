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
    ll n, a, b; cin >> n >> a >> b;

    ll ans = 0;
    if(abs(a - b) % 2 == 0){
        ans = abs(a - b) / 2;
    }else{
        ll turnl = min(a - 1, b - 1) + 1;
        ll turnr = min(n - a, n - b) + 1;
        ans = min(turnl + abs(max(a, b) - turnl - 1) / 2, turnr + abs(min(a, b) + turnr - n) / 2);
    }
    cout << ans << endl;
}