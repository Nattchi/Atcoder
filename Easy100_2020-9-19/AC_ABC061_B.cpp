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
    vector<string> w(n);
    set<string> st;
    bool valid = true;
    for(int i = 0; i < n; i++) cin >> w[i];

    st.insert(w[0]);
    for(int i = 1; i < n; i++){
        if(st.find(w[i]) == st.end() && w[i-1].back() == w[i].front()){
            st.insert(w[i]);
        }else{
            valid = false;
            break;
        }
    }

    if(valid){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}