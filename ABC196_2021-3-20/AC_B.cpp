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
    string x; cin >> x;
    auto pos = x.find('.');
    string ans = x;
    if(pos != string::npos){
        ans = x.substr(0, pos);
    }
    cout << ans << endl;
}