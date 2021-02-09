#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;
    int last = s.size() - 1;
    if(s[last] == 's'){
        cout << s + "es" << endl;
    }else{
        cout << s + "s" << endl;
    }
}