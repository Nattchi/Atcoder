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

    int ans = 0;
    string before = "";
    string current = "";

    for (size_t i = 0; i < s.size(); i++) {
        current += s[i];
        if(current != before){
            ans++;
            before = current;
            current = "";
        }
    }
    cout << ans << endl;
}