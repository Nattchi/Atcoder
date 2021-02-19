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
    vector<ll> h(n+1);
    rep(i, n) cin >> h[i];

    bool possible = true;
    ll border = h[1];
    rep(i, n){
        if(h[i] >= border){
            border = max(border, h[i]-1);
        }else{
            possible = false;
            break;
        }
    }

    if(possible){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}