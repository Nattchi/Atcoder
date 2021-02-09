#include <iostream>
#include <string>
using namespace std;

int main(){
    string S, T;
    cin >> S >> T;

    int length = S.length();
    int differ = 0;
    for (int i = 0; i < length; i++){
        if(S[i] != T[i]) differ++;
    }
    cout << differ << endl;
}