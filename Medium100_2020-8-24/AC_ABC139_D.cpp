#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main(){
    long long n;
    cin >> n;

    long long ans = n * (n-1) / 2;
    cout << ans << endl;
}