#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
const int INF = 100000000;
int main(){
    int A, B, m;
    cin >> A >> B >> m;
    vector<int> a(A+1, INF);
    vector<int> b(B+1, INF);
    for(int i = 1; i <= A; i++){
        cin >> a[i];
    }
    for(int i = 1; i <= B; i++){
        cin >> b[i];
    }
    vector<int> x(m+1);
    vector<int> y(m+1);
    vector<int> c(m+1);
    for(int i = 1; i <= m; i++){
        cin >> x[i] >> y[i] >> c[i];
    }

    int min_ref = *min_element(a.begin(), a.end());
    int min_mic = *min_element(b.begin(), b.end());
    int ans = min_ref + min_mic;
    for(int i = 1; i <= m; i++){
        ans = min(ans, (a[x[i]]+b[y[i]])-c[i]);
    }
    cout << ans << endl;
}