#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>

using namespace std;

int main(){
    int h, w; cin >> h >> w;
    vector<vector<char> > c(h + 1, vector<char>(w + 1));
    for(int i = 1; i <= h; i++){
        for(int j = 1; j <= w; j++){
            cin >> c[i][j];
        }
    }
    for(int i = 1; i <= 2 * h; i++){
        for(int j = 1; j <= w; j++){
            cout << c[(i+1)/2][j];
        }
        cout << "\n";
    }

}