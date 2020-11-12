#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, d, x;
    cin >> n >> d >> x;
    vector<int> a(n);
    int count = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        int day = 1;
        bool flag = true;
        while(flag){
            if(day <= d){
                day += a[i];
                count++;
            }else{
                flag = false;
            }
        }
    }
    long long ans = count + x;
    cout << ans << endl;
}