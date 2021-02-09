#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>

using namespace std;

int main() {
    int n, s, d;
    cin >> n >> s >> d;
    vector<int> x(n);
    vector<int> y(n);
    bool possible = false;
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
        if(x[i] < s && y[i] > d) possible = true;
    }

    if(possible){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}