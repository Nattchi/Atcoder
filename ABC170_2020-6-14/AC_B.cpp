#include <iostream>
using namespace std;

int main(){
    int X, Y;
    cin >> X >> Y;
    bool can = false;

    if((Y % 2) == 1){
        cout << "No" << endl;
    }else{
        for (int a = 0; a <= X; a++){
            if((4 * X - 2 * a) == Y){
                can = true;
            }
        }
        if (can) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}