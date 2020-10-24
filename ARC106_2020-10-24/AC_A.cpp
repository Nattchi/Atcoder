#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

// n の k 乗を mod で割った余りを計算
long long power_mod(long long n, long long k) {
    long long result = 1;
    // k を右シフトしつつ n を 2 乗していく
    while (k > 0) {
        // k の最下ビットが 1 なら、今の n を答えに掛ける
        if ((k & 1) == 1) result = (result * n);
        n = n * n;
        k >>= 1;
    }
    return result;
}

int main(){
    long long n;
    cin >> n;
    bool find = false;
    long long a = 0;
    int b = 0;
    for(b = 1; b <= 26; b++){
        long long x = n-power_mod(5, b);
        if(x < 0) break;
        for(a = 1; a <= 38; a++){
            if(x == power_mod(3, a)){
                find = true;
                break;
            }
        }
        if(find) break;
    }
    if(!find){
        cout << -1 << endl;
    }else{
        cout << a << " " << b << endl;
    }
}