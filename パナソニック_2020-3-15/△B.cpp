/*
-反省-
・コーナーケース(h or w == 1) の想定欠如
*/
#include <iostream>
using namespace std;

int main(){
    unsigned long long h, w, count;
    cin >> h >> w;
    if (h == 1 || w == 1){
        count = 1;
    } else {
        count = (h * w) % 2 == 0 ? h * w / 2 : h * w / 2 + 1;
    }
    cout << count << endl;
}
