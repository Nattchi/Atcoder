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
    int t, a; cin >> t >> a;
    vector<int> h(n);
    for(int i = 0; i < n; i++) cin >> h[i];
    vector<long double> avg_temp(n);
    for(int i = 0; i < n; i++){
        avg_temp[i] = abs(t - h[i] * 0.006 - a);
    }
    int ans = (min_element(avg_temp.begin(), avg_temp.end()) - avg_temp.begin()) + 1;
    cout << ans << endl;
}