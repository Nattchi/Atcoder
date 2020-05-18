#include <math.h>
#include <cmath>
#include <algorithm>
#include <iostream>

using namespace std;
int main() {
    int A, B, H, M;// A < B
    cin >> A >> B >> H >> M;

    double theta = 0;
    double ans = 0;
    double PI = 3.141592653589793;

    double hour = 30 * H + (M / 2.0);
    double min = 6 * M;
    bool flag = hour > min;

    if(flag){
        if(hour - min >= 180){
            theta = (360 - (hour - min)) / 180.0 * PI;
        }else{
            theta = (hour - min) / 180.0 * PI;
        }
    }else{
        if(min - hour >= 180){
            theta = (360 - (min - hour)) / 180.0 * PI;
        }else{
            theta = (min - hour) / 180.0 * PI;
        }
    }
    ans = sqrt(A * A + B * B - 2.0 * A * B * cos(theta));
    printf("%.15f\n", ans);
}