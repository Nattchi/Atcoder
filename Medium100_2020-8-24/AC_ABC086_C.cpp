#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> x(n+1);
    vector<int> y(n+1);
    vector<int> t(n+1);
    bool possible = true;

    for(int i = 1; i <= n; i++) cin >> t[i] >> x[i] >> y[i];
    for(int i = 0; i < n; i++){
        int time = t[i+1] - t[i];
        int cost = abs(x[i] - x[i+1]) + abs(y[i] - y[i+1]);
//        cout << cost << endl;
        if(!(cost <= time && cost % 2 == time % 2)){
            possible = false;
        }
    }
    if(possible){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}