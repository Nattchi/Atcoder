#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;

    if (s.substr(2, 1) == s.substr(3, 1) && s.substr(4, 1) == s.substr(5, 1)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}
