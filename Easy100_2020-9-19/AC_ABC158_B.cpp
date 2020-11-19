#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long n, a, b;
    cin >> n >> a >> b;

    long long block = a + b;
    long long rest = n % block;
    long long ans = n / block * a + min(rest, a);
    cout << ans << endl;
}