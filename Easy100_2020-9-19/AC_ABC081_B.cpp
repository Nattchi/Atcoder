#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    long long ans = 0;
    bool flag = true;
    while(flag) {
        int count = 0;
        for (int i = 0; i < n; i++) {
            if(a[i] %2 == 0){
                count++;
                a[i] /= 2;
            }else{
                flag = false;
            }
        }
        if(flag) ans++;
    }
    cout << ans << endl;
}