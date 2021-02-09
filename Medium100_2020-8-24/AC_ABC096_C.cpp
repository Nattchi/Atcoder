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
    vector<vector<char> > s(h, vector<char>(w));
    bool possible = true;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cin >> s[i][j];
        }
    }

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(s[i][j] == '#'){
                if((i-1 >= 0 && s[i-1][j] == '#') || (j-1 >= 0 && s[i][j-1] == '#') ||
                (j+1 < w && s[i][j+1] == '#') || (i+1 < h && s[i+1][j] == '#')){
                    continue;
                }
                possible = false;
            }
            if(!possible) break;
        }
    }

    if(possible){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}