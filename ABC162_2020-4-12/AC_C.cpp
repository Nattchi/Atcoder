#include <iostream>
#include <vector>
using namespace std;
// aとbとcの最大公約数』　＝　『aとbの最大公約数』と『c』　の最大公約数
int gcd(int a, int b){
    if(b == 0){
        return a;
    }
    return gcd(b, a % b);
}

int main(){
    int k;
    cin >> k;
    int sum = 0;
    for (int a = 1; a <= k; a++){
        for (int b = 1; b <= k; b++){
            for (int c = 1; c <= k; c++){
                sum += gcd(gcd(a, b), c);
            }
        }
    }
    cout << sum << endl;
}