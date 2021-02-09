#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>

using namespace std;

int main(){
    int a, b, k;
    cin >> a >> b >> k;
    set<int> st;
    for(int i = a; i < a+k; i++){
        if(i > b) break;
        st.insert(i);
    }
    for(int i = b-k+1; i <= b; i++){
        if(i >= a) st.insert(i);
    }
    for(int x : st){
        cout << x << endl;
    }
}