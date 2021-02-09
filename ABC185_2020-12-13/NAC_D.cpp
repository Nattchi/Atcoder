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

    vector<int> a(m+2);
    a[0] = 0;
    vector<int> white_dis;
    for(int i = 1; i <= m; i++){
        cin >> a[i];
    }
    a[m+1] = n+1;
    sort(a.begin(), a.end());

    for(int i = 1; i <= m+1; i++){
        if(a[i]-a[i-1] != 1){
            white_dis.push_back(a[i]-a[i-1]-1);
        }
    }
    if(!(int)white_dis.size()) {
        cout << 0 << endl;
        return 0;
    }
    int k = *min_element(white_dis.begin(), white_dis.end());
    long long ans = 0;
    for(size_t i = 0; i < white_dis.size(); i++){
        ans += (white_dis[i] + (k-1)) / k;
    }
    cout << ans << endl;
}