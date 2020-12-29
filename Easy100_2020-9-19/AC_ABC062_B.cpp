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
    vector<vector<char> > board(h+2, vector<char>(w+2));
    for (int (i) = 1; (i) <= h; ++(i)) {
        for (int j = 1; j <= w; ++j) {
            cin >> board[i][j];
        }
    }
    for (size_t (i) = 0; (i) <= h+1; ++(i)) {
        board[i][0] = '#';
        board[i][w+1] = '#';
    }
    for (size_t (i) = 0; (i) <= w+1; ++(i)) {
        board[0][i] = '#';
        board[h+1][i] = '#';
    }

    for (size_t i = 0; i < board.size(); ++i) {
        for (size_t j = 0; j < board[i].size(); ++j) {
            cout << board[i][j];
        }
        cout << "\n";
    }
}