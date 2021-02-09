#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long ans = 0;
    int N = n-1;
    // 積が n-1 以下の掛け算の個数を求める O(n log n)
    for(int a = 1; a < n; a++){
        ans += N / a;
    }
    cout << ans << endl;
}