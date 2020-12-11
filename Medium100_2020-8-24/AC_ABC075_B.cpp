#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

vector<string> count_mine(vector<vector<char> > board){
    vector<string> ans(board.size());
    for(int i = 0; i < (int)board.size(); i++){
        string s;
        for(int j = 0; j < (int)board[i].size(); j++){
            int count = 0;
            for(int y = i-1; y <= i+1; y++){
                for(int x = j-1; x <= j+1; x++){
                    if(y == i && x == j) continue;
                    if(y >= 0 && y < board.size() && x >= 0 && x < board[y].size()){
                        if(board[y][x] == '#') count++;
                    }
                }
            }
            if(board[i][j] == '#'){
                s.push_back('#');
            }else {
                s.push_back(count + '0');
            }
        }
        ans[i] = s;
    }
    return ans;
}

int main(){
    int h, w;
    cin >> h >> w;
    vector<vector<char> > board(h, vector<char>(w));
    for(int i = 0; i < h; i++){
        string s;
        cin >> s;
        for(size_t j = 0; j < s.size(); j++){
            board[i][j] = s[j];
        }
    }
    vector<string> ans = count_mine(board);
    for(size_t i = 0; i < ans.size(); i++){
        cout << ans[i] << endl;
    }
}