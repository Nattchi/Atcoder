#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main(){
    int a, b;
    string s;
    cin >> a >> b >> s;

    bool valid = true;
    for(size_t i = 0; i < a+b; i++){
        if(i == a){
            if(s[i] != '-') valid = false;
        }
        else if(isdigit(s[i]) == 0) valid = false;
    }
    if(valid){
        cout << "Yes" << endl;
    } else{
        cout << "No" << endl;
    }
}