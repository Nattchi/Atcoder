#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>

using namespace std;

int main(){
    int n, x;
    cin >>n >> x;
    vector<int> v(n+1);
    vector<int> p(n+1);
    double al = 0;
    for(int i = 1; i <= n; i++){
        cin >> v[i] >> p[i];
    }
    int ans = 0;
    for(int i = 1; i <= n; i++){
        al += (v[i] * p[i]);
        if(al > x * 100){
            ans = i;
            break;
        }
    }
    if(ans == 0 && al <= x * 100) cout << -1 << endl;
    else cout << ans << endl;
}