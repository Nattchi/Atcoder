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
    vector<int> p(n);
    int ans = 0;
    int min = n+100;
    for(int i = 0; i < n; i++){
        cin >> p[i];
        if(p[i] < min){
            min = p[i];
            ans++;
        }
    }
    cout << ans << endl;
}