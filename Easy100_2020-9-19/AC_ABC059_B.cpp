#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>

using namespace std;

int main(){
    string a, b;
    cin >> a >> b;

    bool greater = false;
    bool less = false;
    bool equal = false;
    if(a.size() > b.size()){
        greater = true;
    }else if(a.size() < b.size()){
        less = true;
    }else{
        for (size_t i = 0; i < a.size(); ++i) {
            int a_num = (a[i] - '0');
            int b_num = (b[i] - '0');
            if(a_num > b_num){
                greater = true;
                break;
            }else if(a_num < b_num){
                less = true;
                break;
            }
        }
        equal = true;
    }

    if(greater){
        cout << "GREATER" << endl;
        return 0;
    }
    if(less){
        cout << "LESS" << endl;
        return 0;
    }
    if(equal){
        cout << "EQUAL" << endl;
        return 0;
    }
}