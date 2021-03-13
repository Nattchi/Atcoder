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
    ll a, b, w; cin >> a >> b >> w;
    ll kg = w * 1000;

    vector<ll> num;
    for (int n = 1; n <= 1000000; ++n) {
        if(a*n <= kg && kg <= b *n){
            num.push_back(n);
        }
    }

    bool possible = num.size() > 0;
    if(possible){
        cout << num[0] << " " << num[num.size()-1] << endl;
    }else{
        cout << "UNSATISFIABLE" << endl;
    }
}