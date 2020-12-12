#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>

using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    set<long long> st;
    int i = a;
    while(true){
        auto it = st.find(i % b);
        if(it != st.end()) break;
        if(i > b) {
            st.insert(i % b);
        }
        i += a;
    }
    bool found = st.find(c) != st.end();
    if(found){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}