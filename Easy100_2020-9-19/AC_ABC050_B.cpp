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
    int sum = 0;
    vector<int> t(n+1); for(int i = 1; i <= n; i++) {
        cin >> t[i];
        sum += t[i];
    }
    int m; cin >> m;
    vector<int> p(m+1); vector<int> x(m+1);
    for(int i = 1; i <= m; i++) {
        cin >> p[i] >> x[i];
        cout << sum - t[p[i]] + x[i] << endl;
    }
}