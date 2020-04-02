#include <iostream>
using namespace std;

int main() {
    long long a, b, k, takahashi, aoki;
    cin >> a >> b >> k;
    if(a >= k){
        takahashi = a - k;
        aoki = b;
    }else{
        takahashi = 0;
        aoki = b >= (k - a) ? a + b - k : 0;
    }

    cout << takahashi << " " << aoki << endl;
}