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
    string s; cin >> s;
    ll size = s.size();
    ll n = stoll(s);
    ll ans = 0;

    if(n == 1000000000000000){
        ans += 5;
        n -= 1;
    }
    if(n >= 1000000000000){
        ans += (n - 1000000000000 + 1) * 4;
        n = 1000000000000;
        n--;
    }
    if(n >= 1000000000){
        ans += (n - 1000000000 + 1) * 3;
        n = 1000000000;
        n--;
    }
    if(n >= 1000000){
        ans += (n - 1000000 + 1) * 2;
        n = 1000000;
        n--;
    }
    if(n >= 1000){
        ans += (n - 1000 + 1);
    }
    cout << ans << endl;
}