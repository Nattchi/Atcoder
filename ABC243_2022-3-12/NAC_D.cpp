#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>
#include <cmath>
#include <queue>
#include <deque>
#include <stack>

using namespace std;
using ll = long long;
using ld = long double;
#define rep(i, n) for(ll i=0;i<ll(n);i++)
#define REP(i, s, n) for(ll i=(ll)(s);i<(ll)(n);i++)

int main() {
    ll n, x; cin >> n >> x;
    string s; cin >> s;

    stack<string> st;
    for(auto c: s){
        string tp;
        if(!st.empty()) tp = st.top();
        if(c=='U'){
            if(tp == "L" || tp == "R") {
                if(!st.empty()) st.pop();
            }else{
                string add{c};
                st.push(add);
            }
        }else if(c=='L'){
            string add{c};
            st.push(add);
        }else{
            string add{c};
            st.push(add);
        }
    }
    string str;
    while(!st.empty()){
        auto ch = st.top(); st.pop();
        str = ch + str;
    }
    ll ans = x;
    for(auto c: str){
//        cout << ans << endl;
        if(c=='U'){
            if(ans >= 2) ans /= 2;
        }else if(c=='L'){
            ans *= 2;
        }else if(c=='R'){
            ans *= 2;
            ans++;
        }
    }
    cout << ans << endl;
}