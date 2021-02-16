#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>

using namespace std;

long long pow(long long x, long long n) {
    long long ret = 1;
    while (n > 0) {
        if (n & 1) ret *= x;  // n の最下位bitが 1 ならば x^(2^i) をかける
        x *= x;
        n >>= 1;  // n を1bit 左にずらす
    }
    return ret;
}

int main(){
    long long x; cin >> x;
    long long ans = 0;

    for (int b = 1; b <= 31; b++) {
        for (int p = 2; p <= 9; p++) {
            long long pro = pow(b, p);
            if(pro <= x) ans = max(ans, pro);
        }
    }
    cout << ans << endl;
}