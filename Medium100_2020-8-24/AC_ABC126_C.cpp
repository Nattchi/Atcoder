#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>
#include <cmath>

using namespace std;
using ll = long long;

long long pow(long long x, long long n) {
    long long ret = 1;
    while (n > 0) {
        if (n & 1) ret *= x;  // n の最下位bitが 1 ならば x^(2^i) をかける
        x *= x;
        n >>= 1;  // n を1bit 左にずらす
    }
    return ret;
}

ll roundUp(ll a, ll b){
    return (a + (b - 1)) / b;
}

int main(){
    ll n, k; cin >> n >> k;

    long double ans = 0;

    for (int i = 1; i <= n; ++i) {
        long long index = 0;
        long double score = 1;
        index += ceill(log2(roundUp(k, i)));
        long double div = (n * pow(2, index));
        score /= div;
        ans += score;

//        cout << index << ", " << score << endl;
    }

    printf("%.12Lf\n", ans);
}