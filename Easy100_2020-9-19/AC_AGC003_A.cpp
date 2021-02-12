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
    vector<int> move(4);
    for (int i = 0; i < s.size(); i++) {
        switch (s[i]) {
            case 'N':
                move[0]++;
                break;
            case 'W':
                move[1]++;
                break;
            case 'S':
                move[2]++;
                break;
            case 'E':
                move[3]++;
                break;
        }
    }
    bool possible = (((move[0] > 0 && move[2] > 0) || (move[0] == 0 && move[2] == 0)) && ((move[1] > 0 && move[3] > 0) || (move[1] == 0 && move[3] == 0)));
    if (possible){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}