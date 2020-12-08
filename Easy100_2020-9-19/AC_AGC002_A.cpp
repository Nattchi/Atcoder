#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    string ans;
    if(a > 0){//0 < a <= b
        ans = "Positive";
    }else if (a <= 0 && b >= 0){// a <= 0 <= b
        ans = "Zero";
    }else if (a < 0 && b < 0){//
        bool positive = (b - a) % 2;
        if(positive){
            ans = "Positive";
        }else{
            ans = "Negative";
        }
    }
    cout << ans << endl;
}