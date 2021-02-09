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
    vector<string> s(n);
    set<string> st;
    for(int i = 0; i < n; i++) {
        cin >> s[i];
        st.insert(s[i]);
    }

    bool found = false;
    string ans;
    set<string> all;
    for(string str : st){
        if(str[0] == '!'){
            if(all.insert(str.substr(1)).second == false) {
                found = true;
                ans = str.substr(1);
                break;
            }
            all.insert(str.substr(1));
        }else{
            if(all.insert(str).second == false) {
                found = true;
                ans = str;
                break;
            }
            all.insert(str);
        }
    }

    if(found){
        cout << ans << endl;
    }else{
        cout << "satisfiable" << endl;
    }
}