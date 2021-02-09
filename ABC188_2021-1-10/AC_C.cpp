#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n;
    int size = pow(2, n);
    vector<int> a(size);
    for(int i = 0; i < size; i++){
        cin >> a[i];
    }
    auto left_max = max_element(a.begin(), a.begin()+size/2);
    auto right_max = max_element(a.begin()+size/2, a.end());
    int ans;
    if(*left_max > *right_max){
        ans = distance(a.begin(), right_max);
    }else{
        ans = distance(a.begin(), left_max);
    }
    cout << ans+1 << endl;
}