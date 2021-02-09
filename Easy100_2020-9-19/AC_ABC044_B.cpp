#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>

using namespace std;

int main(){
    string w;
    cin >> w;
    vector<int> alpha_map(26);

    for(size_t i = 0; i < w.size(); i++){
        alpha_map[(w[i]-'a')]++;
    }
    bool isBeautiful = true;
    for(size_t i = 0; i < alpha_map.size(); i++){
        if(alpha_map[i] % 2 != 0){
            isBeautiful = false;
            break;
        }
    }
    if(isBeautiful){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}