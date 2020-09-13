#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    long long ans = a * c;

    if( a >= 0 ){
        if( c >= 0) {
            ans = b * d;
        } else{
            if(d > 0){
                ans = b * d;
            }else{
                ans = a * d;
            }
        }
    }else{
        if(b >= 0){
            if(c > 0){
                ans = b * d;
            }else{
                ans = max(a*c, b*d);
            }
        }else{
            if(c > 0){
                ans = b * c;
            }else {
                ans = a * c;
            }
        }
    }

    cout << ans << endl;
}