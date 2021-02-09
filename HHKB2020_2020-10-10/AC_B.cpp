#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int count(vector<vector<char> > b, int i, int j){
    int c = 0;
    if(b[i][j] == '.'){
        if(j+1 < b[i].size() && b[i][j+1] == '.') c++;
        if(i+1 < b.size() && b[i+1][j] == '.') c++;
    }
    return c;
}

int main(){
    int h, w;
    cin >> h >> w;
    vector<vector<char> > board(h, vector<char>(w));
    string s;
    for(int i = 0; i < h; i++){
        cin >> s;
        for(size_t j = 0; j < s.size(); j++){
            board[i][j] = s[j];
        }
    }
    int ans = 0;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            ans += count(board, i, j);
        }
    }
    cout << ans << endl;
}