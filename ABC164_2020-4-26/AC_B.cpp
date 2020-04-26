#include <iostream>
using namespace std;
int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    bool takahashi_win = false;
    while(true){
        c -= b;
        if (c <= 0){
            takahashi_win = true;
            break;
        }
        a -= d;
        if(a <= 0){
            break;
        }
    }
    if(takahashi_win){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}
