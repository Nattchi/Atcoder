#include <iostream>
using namespace std;
int main(){
    int D, T, S;
    cin >> D >> T >> S;
    if(D % S == 0){
        if(D / S <= T){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }else{
        if(D / S + 1 <= T){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }

}