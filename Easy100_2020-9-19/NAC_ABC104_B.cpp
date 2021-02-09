#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>
#include <cctype>
using namespace std;

int main(){
    string s; cin >> s;
    int n = s.size();
    bool complete = (s[0] == 'A' && s[n-1] != 'C');
    if(complete) complete = 1 == count(s.begin()+2, s.end()-1, 'C');
    if(complete) {
        for (size_t i = 1; i < s.size(); i++) {
            if(complete){
                if (s[i] == 'C') {
                    continue;
                } else {
                    complete = islower(s[i]);
                }
            }else{
                break;
            }
        }
    }
    if(complete){
        cout << "AC" << endl;
    }else{
        cout << "WA" << endl;
    }
}