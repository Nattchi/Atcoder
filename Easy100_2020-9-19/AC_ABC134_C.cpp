#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    auto itr = max_element(a.begin(), a.end());
    int max = *itr;
    int max_idx = std::distance(a.begin(), itr);
    sort(a.begin(), a.end(), greater<int>());
    for(int i = 0; i < n; i++){
        if(max_idx == i){
            cout << a[1] << endl;
        }else{
            cout << max << endl;
        }
    }
}