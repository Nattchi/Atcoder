#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>

using namespace std;

int main(){
    int h, w;
    cin >> h >> w;
    vector<vector<int> > a(h, vector<int>(w));
    int min_block = 100;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cin >> a[i][j];
            min_block = min(min_block, a[i][j]);
        }
    }
    int ans = 0;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            ans += (a[i][j] - min_block);
        }
    }
    cout << ans << endl;
}