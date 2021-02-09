#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<double> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    while(v.size() != 1){
        v.push_back((v[0] + v[1]) / 2);
        v.erase(v.begin(), v.begin() + 2);
        sort(v.begin(), v.end());
    }
    cout << v[0] << endl;
}