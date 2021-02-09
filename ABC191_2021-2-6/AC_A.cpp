#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>

using namespace std;

int main(){
    int v, t, s, d;
    cin >> v >> t >> s >> d;
    bool possible = (v * t <= d) && (d <= v * s);
    if(!possible){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}