#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>

using namespace std;
using ll = long long;

int main(){
    ll n, m; cin >> n >> m;
    vector<ll> s(m+1); vector<ll> c(m+1);
    vector<vector<ll> > vec(n+1, vector<ll>(10));
    bool possible = true;
    string ans;

    for (int i = 1; i <= m; ++i) {
        cin >> s[i] >> c[i];
        if(n > 1 && s[i] == 1 && c[i] == 0) {
            possible = false;
            break;
        }
        if(vec[s[i]][c[i]] == 0) vec[s[i]][c[i]]++;
    }

    for (int i = 1; i <= n; ++i) {
        ll sum = 0;
        ll idx = -1;
        for (int j = 0; j <= 9; ++j) {
            sum += vec[i][j];
            if(vec[i][j] > 0) idx = j;
        }
        if(sum > 1){
            possible = false;
            break;
        }else{
            if(idx > 0) {
                ans += to_string(idx);
            }else{
                if(n > 1 && i == 1){
                    ans += "1";
                }else{
                    ans += "0";
                }
            }
        }
    }

    if(possible){
        cout << ans << endl;
    }else{
        cout << -1 << endl;
    }
}