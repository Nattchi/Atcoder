#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, m, c;
    cin >> n >> m >> c;
    vector<vector<int> > a(n, vector<int>(m));
    vector<int> b(m);

    for(int i = 0; i < m; i++){
        cin >> b[i];
    }
    int ans = 0;
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum = c;
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
            sum += a[i][j] * b[j];
        }
        if(sum > 0) ans++;
    }
    cout << ans << endl;
}