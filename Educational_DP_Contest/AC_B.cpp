#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> h(n);
    for(int i = 0; i < n; i++){
        cin >> h[i];
    }

    vector<int> dp(n, 1000000000);
    dp[0] = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= k; j++) {
            if (i + j < n) {
                dp[i + j] = min(dp[i] + abs(h[i + j] - h[i]), dp[i + j]);
//                cout << i+j << "  :  " << dp[i+j] << endl;
            }
        }
    }
    cout << dp[n-1] << endl;
}