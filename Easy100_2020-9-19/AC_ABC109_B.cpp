#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    vector<int> a(m);
    vector<int> b(m);
    vector<int> ans(n+1);
    for(int i = 0; i < m; i++){
        cin >> a[i] >> b[i];
        ans[a[i]]++;
        ans[b[i]]++;
    }

    for(int i = 1; i <= n; i++){
        cout << ans[i] << endl;
    }
}