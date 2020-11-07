#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;
int need_steps = 0;
string ans = "";
stack<int> got;

void move(int x, int y, int target_x, int target_y){
    int x_move = x - target_x;
    int y_move = y - target_y;
    need_steps = abs(x_move) + abs(x_move);
    if(x_move < 0){
        string add(abs(x_move), 'D');
        ans += add;
    }else if(x_move > 0){
        string add(abs(x_move), 'U');
        ans += add;
    }

    if(y_move < 0){
        string add(abs(y_move), 'R');
        ans += add;
    }else if(y_move > 0){
        string add(abs(y_move), 'L');
        ans += add;
    }
}

void input(){
    ans += "I";
}

void output(){
    ans += "O";
}

int main(){
    vector<int> x(100);
    vector<int> y(100);
    for(int i = 0; i < 100; i++){
        cin >> x[i] >> y[i];
    }

    int now_x = 0;
    int now_y = 0;
    while(got.size() <= 99){
        int g_size = got.size();
        move(now_x, now_y, x[g_size], y[g_size]);
        input();
        now_x = x[g_size];
        now_y = y[g_size];
        got.push(g_size);
    }
    cout << ans << endl;
}

