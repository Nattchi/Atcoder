#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>

using namespace std;

int main(){
    long long n, l; cin >> n >> l;

    string ans = "";
    vector<string> s(n);
    for (int i = 0; i < n; i++) cin >> s[i];

    sort(s.begin(), s.end());
    for (int i = 0; i < n; i++){
        ans += s[i];
    }
    cout << ans << endl;
}