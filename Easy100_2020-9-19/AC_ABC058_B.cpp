#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>

using namespace std;

int main(){
    string o, e, ans; cin >> o >> e;
    int n = o.size() + e.size();
    for(int i = 1; i <= n; i++){
        if(i%2==0){
            ans += e[i/2-1];
        }else{
            ans += o[i/2];
        }
    }
    cout << ans << endl;
}