#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    long long ans = 0;
    if(a == b && b == c){
        if(a % 2 == 0){
            ans = -1;
        }else{
            ans = 0;
        }
        cout << ans << endl;
        return 0;
    }

    int next_a, next_b, next_c;
    while(true){
        if(a % 2 == 0){
            next_b = a / 2;
            next_c = a / 2;
        }else{
            break;
        }
        if(b % 2 == 0){
            next_a = b / 2;
            next_c += b / 2;
        }else{
            break;
        }
        if(c % 2 == 0){
            next_a += c / 2;
            next_b += c / 2;
        }else{
            break;
        }
        a = next_a;
        b = next_b;
        c = next_c;
        ans++;
    }
    cout << ans << endl;
}