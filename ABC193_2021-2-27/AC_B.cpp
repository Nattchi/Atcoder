#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>

using namespace std;

int main(){
    int n; cin >> n;
    vector<int> a(n);
    vector<int> p(n);
    vector<int> x(n);

    int cost = 1000000001;
    for (int i = 0; i < n; ++i) {
        cin >> a[i] >> p[i] >> x[i];
        if(x[i] - a[i] > 0){
            cost = min(cost, p[i]);
        }
    }

    if(cost != 1000000001){
        cout << cost << endl;
    }else{
        cout << -1 << endl;
    }

}