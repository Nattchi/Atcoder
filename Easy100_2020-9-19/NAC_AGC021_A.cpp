#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>

using namespace std;

int main(){
    string s; cin >> s;
    int size = s.size();

    string decimal = s.substr(0, 1);
    int big = s[0] - '0';
    for (int i = 1; i < size; i++) {
        decimal += "9";
    }

    long long ans = (big - 1) + 9 * (size - 1);
    if(stoll(s) == stoll(decimal)) ans++;
    cout << ans << endl;
}