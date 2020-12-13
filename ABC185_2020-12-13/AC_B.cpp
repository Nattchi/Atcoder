#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>

using namespace std;

int main(){
    int n, m, t;
    cin >> n >> m >> t;
    vector<int> a(m);
    vector<int> b(m);
    int vaterry = n;
    bool possible = true;
    int last = 0;
    for(int i = 0; i < m; i++){
        cin >> a[i] >> b[i];
        vaterry -= (a[i] - last);
//        cout << i << ", " << vaterry << endl;
        if(vaterry <= 0) {
            possible = false;
            break;
        }
        vaterry += (b[i] - a[i]);
        if(vaterry > n) vaterry = n;
        last = b[i];
    }
    vaterry -= (t - b[m-1]);
//    cout << vaterry << endl;
    if(vaterry <= 0) {
        possible = false;
    }

    if(possible){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}