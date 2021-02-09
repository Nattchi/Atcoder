#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int f(int s){
    multiset<int> st;
    int m = 1;
    st.insert(s);
    int n = s;
    bool flag = true;
    while(flag) {
        if ((n % 2) == 0) {
            st.insert(n / 2);
            n = n / 2;
        } else {
            st.insert(n * 3 + 1);
            n = n * 3 + 1;
        }
        m++;
        flag = st.count(n) < 2;
    }
    return m;
}

int main(){
    int s;
    cin >> s;

    cout << f(s) << endl;
}