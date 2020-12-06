#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

long long gcd(long long a, long long b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}
/*  lcm2 (a, b) : 2整数版
    入力：整数 a, b
    出力：aとbの最小公倍数
*/
long long lcm2(long long a, long long b) {
    long long d = gcd(a, b);
    return a / d * b;
}
/* lcm (vec) : ベクトルでの多整数版
    入力：整数のベクトル vec
    出力：すべての要素の最小公倍数
*/
long long lcm(const vector<long long> &vec) {
    long long l = vec[0];
    for (int i = 0; i < vec.size() - 1; i++) {
        l = lcm2(l, vec[i + 1]);
    }
    return l;
}

int main(){
    int n;
    cin >> n;
    vector<long long> nums;
    for(int i = 2; i <= n; i++){
        nums.push_back(i);
    }

    long long least_cm = lcm(nums);
    long long ans = least_cm + 1;
    cout << ans << endl;
}