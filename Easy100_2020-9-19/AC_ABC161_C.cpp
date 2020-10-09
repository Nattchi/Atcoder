#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long n, k, ans;
    cin >> n >> k;

    if(n < k){
        ans = min(n, abs(n-k));
    }else if(n > k){
        ans = min(n%k, abs(n%k-k));
    }else{
        ans = 0;
    }
    cout << ans << endl;
}