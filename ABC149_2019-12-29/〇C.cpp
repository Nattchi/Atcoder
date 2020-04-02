/*
反省点
・√x まで調べれば、素数判定ができる
*/
#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    if (x == 2) {
        cout << x << endl;
    } else {
        bool flag = true;
        while (flag) {
            for (int i = 2; i < x; i++) {
                if (x % i == 0) {  // i は x の約数
                    x++;
                    break;
                } else {  // i は x の約数でない
                    if (i == x - 1) {
                        flag = false;
                    } else {
                        continue;
                    }
                }
            }
        }
        cout << x << endl;
    }
}