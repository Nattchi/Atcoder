#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> a(n);
    vector<long long> b(n);
    long long ans = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i] >> b[i];
        ans += (b[i]*(b[i]+1)/2) - (a[i]*(a[i]-1)/2);
    }
    cout << ans << endl;

}