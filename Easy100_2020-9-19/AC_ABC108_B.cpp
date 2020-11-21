#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main(){
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int x_dis = x2 - x1;
    int y_dis = y2 - y1;

    int x3 = x2 - y_dis;
    int y3 = y2 + x_dis;

    int x4 = x1 - y_dis;
    int y4 = y1 + x_dis;

    cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
}