#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    vector<int> gcd(1001);
    for(int i = 2; i <= 1000; i++){
        for(int j = 0; j < n; j++){
            if(a[j] % i == 0) gcd[i] += 1;
        }
    }
    auto ans = max_element(gcd.begin(), gcd.end()) - gcd.begin();
    cout << ans << endl;

}