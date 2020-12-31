#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>

using namespace std;

int main(){
    int n, a, b;
    cin >> n >> a >> b;

    long long ans = 0;
    for(int i = 1; i <= n; i++){
        string s = to_string(i);
        int count = 0;
        for (size_t j = 0; j < s.size(); ++j) {
            count += (s[j] - '0');
        }
        if(count >= a && count <= b) ans += i;
    }
    cout << ans << endl;
}