#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>

using namespace std;

int main(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    int count = 1;
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == count){
            count++;
        }else{
            ans++;
        }
    }
    if(ans == n) ans = -1;
    cout << ans << endl;
}