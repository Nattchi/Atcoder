/*
-反省-
・整数計算で処理できるように、変形
・計算制度の把握
*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long long a, b, c;
    cin >> a >> b >> c;

    bool judge = true;
    long long dis = c - a - b;
    if (dis < 0){
        judge = false;
    } else {
        judge = dis * dis > 4 * a * b ? true : false;
    }
    if (judge){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
