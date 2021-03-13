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
    ll m, h ; cin >>m >> h;
    bool ans = h % m == 0;
    if(ans){
        cout << "Yes" << endl;
    }else{
        cout <<"No" << endl;
    }
}