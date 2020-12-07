#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> h(n);
    for(int i = 0; i < n; i++){
        cin >> h[i];
    }

    vector<int> dp(n, 1000000000);
    dp[0] = 0;
    for(int i = 0; i < n; i++){
        if(i+1 < n) {
            dp[i+1] = min(dp[i] + abs(h[i+1] - h[i]), dp[i+1]);
//            cout << i+1 << "  :  " << dp[i+1] << endl;
        }
        if(i+2 < n) {
            dp[i+2] = min(dp[i] + abs(h[i+2] - h[i]), dp[i+2]);
//            cout << i+2 << "  :  " << dp[i+2] << endl;
        }
    }
    cout << dp[n-1] << endl;
}