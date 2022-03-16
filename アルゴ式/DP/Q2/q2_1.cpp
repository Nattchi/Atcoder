#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>
#include <cmath>
#include <queue>
#include <deque>

using namespace std;
using ll = long long;
using ld = long double;
#define rep(i, n) for(ll i=0;i<ll(n);i++)
#define REP(i, s, n) for(ll i=(ll)(s);i<(ll)(n);i++)

int main() {
    vector<ll> a(16);
    cin >> a[0] >> a[1] >> a[2] >> a[3];

    REP(i, 1, 4){
        rep(j, 4){
            if(4*(i-1)+j-1 >= 0) a[4*i+j] += a[4*(i-1)+j-1];
            a[4*i+j] += a[4*(i-1)+j];
            if(4*(i-1)+j+1 < 4*i) a[4*i+j] += a[4*(i-1)+j+1];
        }
    }
    cout << a[15] << endl;
}