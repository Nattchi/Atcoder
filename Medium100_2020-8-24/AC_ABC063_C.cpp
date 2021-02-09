#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>

using namespace std;

int main(){
    int n; cin >> n;
    vector<int> s(n);
    int sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> s[i];
        sum += s[i];
    }
    sort(s.begin(), s.end());
    int ans = 0;
    if(sum % 10 == 0){
        for(int i = 0; i < n; i++){
            if((sum-s[i]) % 10 != 0) ans = max(ans, (sum-s[i]));
        }
    }
    int idx = 0;
    while(sum % 10 == 0 && idx < n){
        sum -= s[idx];
        idx++;
    }
    ans = max(ans, sum);
    cout << ans << endl;
}