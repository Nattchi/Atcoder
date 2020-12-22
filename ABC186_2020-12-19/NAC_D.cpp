#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> a(n);
    vector<long long> s(n+1);
    long long ans = 0;

    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    for(int i = 0; i < n; i++) {
        s[i+1] = s[i] + a[i];
    }
    for(int i = 1; i < n; i++){
        ans += a[i] * i - s[i];
    }

    cout << ans << endl;
}