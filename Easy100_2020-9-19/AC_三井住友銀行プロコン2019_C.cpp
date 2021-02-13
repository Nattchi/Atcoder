#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>
using namespace std;

int main(){
    long long x; cin >> x;
    bool possible = false;
    long long rest = x % 100;

    vector<long long> dp(rest+1, 1000000);
    vector<long long> c{1, 2, 3, 4, 5};
    dp[0] = 0;

    for (size_t i = 0; i < c.size(); i++) {
        for (int j = 0; j + c[i] <= rest; j++) {
            dp[j + c[i]] = min(dp[j + c[i]], dp[j] + 1);
        }
    }

    possible = x / 100 >= dp[rest];
    if(possible){
        cout << 1 << endl;
    }else{
        cout << 0 << endl;
    }
}