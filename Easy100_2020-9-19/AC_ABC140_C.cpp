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
    vector<int> b(n);
    for(int i = 0; i < n-1; i++) cin >> b[i];

    if(n == 2){
        cout << b[0] * 2 << endl;
        return 0;
    }
    int ans = b[0];
    for(int i = 0; i < n-2; i++){
        if(b[i] >= b[i+1]){
            ans += b[i+1];
        }else{
            ans += b[i];
        }
    }

    ans += b[n-2];
    cout << ans << endl;
}