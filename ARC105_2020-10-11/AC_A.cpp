#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    bool flag = false;

    for(int i = 1; i <= 14; i++){
        if(i == 1){
            if(a == (b+c+d)) {
                flag = true;
                break;
            }
        }else if(i == 2){
            if(b == (a+c+d)){
                flag = true;
                break;
            }
        }else if(i == 3){
            if(c == (a+b+d)){
                flag = true;
                break;
            }
        }else if(i == 4){
            if(d == (a+b+c)){
                flag = true;
                break;
            }
        }else if(i == 5){
            if(a+b == c+d){
                flag = true;
                break;
            }
        }else if(i == 6){
            if(a+c == b+d){
                flag = true;
                break;
            }
        }else if(i == 7){
            if(a+d == b+c){
                flag = true;
                break;
            }
        }else if(i == 8){
            if(b+c == a+d){
                flag = true;
                break;
            }
        }else if(i == 9){
            if(b+d == a+c){
                flag = true;
                break;
            }
        }
    }

    if(flag){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}