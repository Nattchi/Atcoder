#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/*  divisor(n)
    入力：整数 n
    出力：nのすべての約数
    計算量：O(√n)
*/
vector<long long> divisor(long long n) {
    vector<long long> ret;
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            ret.push_back(i);
            if (i * i != n) ret.push_back(n / i);
        }
    }
    sort(ret.begin(), ret.end()); // 昇順に並べる
    return ret;
}

int main(){
    long long n;
    cin >> n;
    vector<long long> ans = divisor(n);
    for(size_t i = 0; i < ans.size(); i++){
        cout << ans[i] << endl;
    }
}