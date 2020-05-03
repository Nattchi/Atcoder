#include <iostream>
using namespace std;

int main(){
    int K, A, B;
    cin >> K >> A >> B;
    bool possible = false;

    for (int i = A; i <= B; i++){
        if(i % K == 0) {
            possible = true;
            break;
        }
    }

    if(possible){
        cout << "OK" << endl;
    }else{
        cout << "NG" << endl;
    }
}