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
    vector<int> x(n);
    vector<int> y(n);
    for(int i = 0; i < n; i++){
        cin >> x[i] >> y[i];
    }

    long long ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            if(i == j) continue;
            double r = (double)(y[j] - y[i]) / (double)(x[j] - x[i]);
            if(r >= -1 && r <= 1) ans++;
        }
    }
    cout << ans << endl;

}