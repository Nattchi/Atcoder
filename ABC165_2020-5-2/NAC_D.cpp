/*
floor(a / b) = (a - a % b) / b と変換できる (a % b を引くことで、a / b の小数部分を引くことができる)
*/
#include <iostream>
using namespace std;

int main(){
    int A;
    long long B, N, x, ans;
    cin >> A >> B >> N;

    if(N >= B - 1){
        x = B - 1;
    }else{
        x = N;
    }
    ans = A * (x % B) / B;
    cout << ans << endl;
}