#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>

using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    bool a_win = true;
    if(a > b){

    }else if(b > a){
        a_win = false;
    }else{
        if(c == 0){
            a_win = false;
        }else{

        }
    }

    if(a_win){
        cout << "Takahashi" << endl;
    }else{
        cout << "Aoki" << endl;
    }
}