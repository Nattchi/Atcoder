#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main(){
    string s;
    cin >> s;

    int min_dis = 1000;
    for(int i = 0; i < (int)s.size(); i++){
        int x = stoi(s.substr(i, 3));
        min_dis = min(min_dis, abs(x - 753));
    }
    cout << min_dis << endl;
}