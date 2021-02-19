#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>

using namespace std;

int main(){
    long long n, t; cin >> n >> t;
    vector<long long> time(n);
    for(int i = 0; i < n; i++) cin >> time[i];

    long long ans = 0;
    for(int i = 1; i < n; i++){
        ans += min(time[i] - time[i-1], t);
    }
    ans += t;
    cout << ans << endl;
}