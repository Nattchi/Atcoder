#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <utility>

using namespace std;

int main(){
    string s;
    cin >> s;

//    sort(s.begin(), s.end());
    set<char> st;
    for(size_t i = 0; i < s.size(); i++){
        st.insert(s[i]);
    }
    string alpha = "abcdefghijklmnopqrstuvwxyz";
    if(st.size() == 26){
        cout << "None" << endl;
    }else{
        int i = 0;
        bool flag = true;
        while(flag) {
            auto it = st.find(alpha[i]);
            if (it == st.end()) {
                cout << alpha[i] << endl;
                return 0;
            }
            i++;
        }
    }

}