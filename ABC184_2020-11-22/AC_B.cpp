#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main(){
    int n, x;
    string s;
    cin >> n >> x >> s;
    int score = x;
    for(size_t i = 0; i < s.size(); i++){
        if(s[i] == 'o'){
            score++;
        }else{
            if(score > 0) score--;
        }
    }
    cout << score << endl;
}