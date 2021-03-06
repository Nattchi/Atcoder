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

const ll MOD = 1000000007;

// n! を mod で割った余りを計算
vector<long long> calc_factorial(int n, int mod) {
    vector<long long> factorial(n + 1);
    factorial[0] = 1; // 0 の階乗は 1
    for (int i = 1; i <= n; i++) {
        factorial[i] = (factorial[i - 1] * i) % mod;
    }
    return factorial;
}

int main(){
    ll n; cin >> n;

    auto v = calc_factorial(n, MOD);
    cout << v[n] << endl;
}