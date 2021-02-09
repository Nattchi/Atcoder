#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> l(m);
    vector<int> r(m);
    for(int i = 0; i < m; i++){
        cin >> l[i] >> r[i];
    }

    int left = *max_element(l.begin(), l.end());
    int right = *min_element(r.begin(), r.end());
    int ans = (right - left + 1) >= 0 ? right - left + 1 : 0;
    cout << ans << endl;
}