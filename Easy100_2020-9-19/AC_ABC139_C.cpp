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
    vector<int> h(n);
    vector<int> step;
    int count = 0;
    cin >> h[0];
    if(n == 1) {
        cout << 0 << endl;
        return 0;
    }
    for(int i = 1; i < n; i++){
        cin >> h[i];
        if(h[i] <= h[i-1]){
            count++;
            if(i == n-1) step.push_back(count);
        }else{
            step.push_back(count);
            count = 0;
        }
    }
    int ans = *max_element(step.begin(), step.end());
    cout << ans << endl;
}