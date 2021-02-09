#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>

using namespace std;

string rotate(string s, int i){
    return s.substr(i) + s.substr(0, i);
}

int main(){
    string s, t; cin >> s >> t;
    bool possible = false;

    for(int i = 0; i < (int)s.size(); i++){
        if(rotate(s, i) == t) possible = true;
    }
    if(possible){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}