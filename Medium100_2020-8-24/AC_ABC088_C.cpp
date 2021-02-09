#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>

using namespace std;

int main(){
    vector<vector<int> > c(4, vector<int>(4));
    for(int i = 1; i <= 3; i++){
        for(int j = 1; j <= 3; j++){
            cin >> c[i][j];
        }
    }
    bool possible = (c[1][1]+c[2][2]+c[3][3]) == (c[1][3]+c[2][1]+c[3][2]) &&
            (c[1][3]+c[2][1]+c[3][2]) == (c[1][2]+c[2][3]+c[3][1]) &&
            (c[1][2]+c[2][3]+c[3][1]) == (c[1][1]+c[2][3]+c[3][2]) &&
            (c[1][1]+c[2][3]+c[3][2]) == (c[1][2]+c[2][1]+c[3][3]) &&
            (c[1][2]+c[2][1]+c[3][3]) == (c[1][3]+c[2][2]+c[3][1]);

    if(possible){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}