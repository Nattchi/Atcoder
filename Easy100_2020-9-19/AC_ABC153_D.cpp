#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    long long h;
    cin >> h;

    long long ans = 0;
    long long n = log2(h);
    for(int i = 0; i <= n; i++){
        ans += pow(2, i);
    }
    cout << ans << endl;
}