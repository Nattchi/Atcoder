#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>

using namespace std;

int main(){
    string s; cin >> s;
    bool readable = true;
    for (size_t i = 0; i < s.size(); ++i) {
        if(i % 2 == 1 && isupper(s[i])){

        }else if(i % 2 == 0 && islower(s[i])){

        }else{
            readable = false;
        }
    }
    if(readable){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}