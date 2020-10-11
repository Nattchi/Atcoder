#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> d(n+1);
    for(int i = 1; i <= n; i++){
        cin >> d[i];
    }

    sort(d.begin(), d.end());
    int center = n / 2;
    int ans = d[center+1] - d[center];
    cout << ans << endl;
}