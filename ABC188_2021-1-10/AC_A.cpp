#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>

using namespace std;

int main(){
    int x, y;
    cin >> x >> y;

    bool possible = abs(x-y) < 3;
    if(possible){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

}