#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    long long x, y, a, b;
    cin >> x >> y >> a >> b;

    long long count = 0;
    while((double)a*x<=2e18 && a*x<=x+b && a*x<y){
        x*=a;
        count++;
    }
    cout << count + (y - (x+1)) / b << endl;
    /*
    long long kako = log(y)/(log(x)+log(a));
    long long atc = 0;

    if((y-x) % b == 0){
        atc = (y-x) / b - 1;
    }else{
        atc = (y-x) / b;
    }
    atc += count;
    long long ans = max(kako+1, atc);
    cout << ans << endl;
     */
}