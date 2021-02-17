#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>

using namespace std;
using ll = long long;

int main(){
    ll a, b, c, x, y; cin >> a >> b >> c >> x >> y;
    ll cost = 0;

    if(a + b >= 2 * c){
        if(a > 2 * c && b > 2 * c){
            cost += max(x, y) * 2 * c;
        }else if(a > 2 * c){
            cost += 2 * c * x;
            if(y > x) cost += b * abs(y - x);
        }else if(b > 2 * c){
            cost += 2 * c * y;
            if(x > y) cost += a * abs(x - y);
        }else{
            if(x >= y){
                cost += y * 2 * c;
                cost += (x - y) * a;
            }else{
                cost += x * 2 * c;
                cost += (y - x) * b;
            }
        }
    }else{
        cost += x * a;
        cost += y * b;
    }

    cout << cost << endl;
}