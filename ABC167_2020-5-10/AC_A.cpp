#include <iostream>
#include <string>
using namespace std;

int main(){
    string S, T;
    cin >> S >> T;

    if(S == T.substr(0, T.size() - 1)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}