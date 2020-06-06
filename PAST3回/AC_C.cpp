#include <iostream>
using namespace std;

unsigned long long pow_kai(unsigned long long a, unsigned long long n) {  // aのn乗を計算します。
  unsigned long long x = 1;
  while (n > 0 && x < 1000000000) {  //全てのbitが捨てられるまで。
    if (n & 1) {   // 1番右のbitが1のとき。
      x = x * a;
    }
    a = a * a;
    n >>= 1;  // bit全体を右に1つシフトして一番右を捨てる。
  }
  return x;
}

int main(){
    unsigned long long A, R, N;
    cin >> A >> R >> N;

    unsigned long long ans = A * pow_kai(R, N - 1);
    if(ans > 1000000000){
        cout << "large" << endl;
    }else{
        cout << ans << endl;
    }
}