#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int M = 1000000007;

long long powmod(long long x,long long y){
    long long res =1 ;
    for(long long i=0;i<y;i++){
        res = res * x % M;
    }
    return res;
}

int main(){
    int N;
    cin >> N;
    long long ans = powmod(10, N) - powmod(9, N) - powmod(9, N) + powmod(8, N);
    ans %= M;
    ans = (ans + M) % M;
    cout << ans << endl;
}