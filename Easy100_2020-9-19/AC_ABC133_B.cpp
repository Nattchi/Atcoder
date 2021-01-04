#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>
#include <cmath>

using namespace std;

int main(){
    int n, d;
    cin >> n >> d;

    vector<vector<int> > x(n, vector<int>(d));
    for(int i = 0; i < n; i++){
        for (int j = 0; j < d; j++) {
            cin >> x[i][j];
        }
    }
    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            double dis = 0;
            for(int k = 0; k < d; k++){
                dis += (x[i][k] - x[j][k]) * (x[i][k] - x[j][k]);
            }
            if(floor(sqrt(dis)) == sqrt(dis)) ans++;
        }
    }
    cout << ans << endl;
}