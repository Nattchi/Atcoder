#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    double sx, sy, gx, gy;
    cin >> sx >> sy >> gx >> gy;
    double r = 0;
    if(sx > gx){
        r = (-sy - gy) / (sx - gx);
    }else{
        r = (sy + gy) / (gx - sx);
    }
//    cout << r << endl;
    double b = gy - r*gx;
    double ans = -b / r;
    printf("%.8lf\n", ans);
}