#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>

using namespace std;

int main(){
    string s;
    cin >> s;

    set<char> st;
    bool unique = true;
    for(size_t i = 0; i < s.size(); i++){
        auto it = st.find(s[i]);
        if (it != st.end()) {
            unique = false;
            break;
        }else {
            st.insert(s[i]);
        }
    }

    if(unique){
        cout << "yes" << endl;
    }else{
        cout << "no" << endl;
    }
}