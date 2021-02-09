#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>

using namespace std;

int main(){
    long double a, b;
    cin >> a >> b;
    int ans = -1;
    for(int x = 1; x <= 1000; x++){
        if(10 * x == 125 * a && x == 10 * b){
            ans = x;
            break;
        }else if((10 * x == 125 * a && x > 10 * b && x < 10 * (b+1)) || (x == 10 * b && 10 * x > 125 * a && 10 * x < 125 * (a+1))){
            ans = x;
            break;
        }else if((x > 10 * b && x < 10 * (b+1)) && (10 * x > 125 * a && 10 * x < 125 * (a+1))){
            ans = x;
            break;
        }
    }
    cout << ans << endl;
}