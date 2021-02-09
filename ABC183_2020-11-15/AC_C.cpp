#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<vector<int> > t(n, vector<int>(n));
    vector<int> nums;
    for(int i = 1; i < n; i++) nums.push_back(i);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> t[i][j];
        }
    }
    int ans = 0;
    do{
        long long cost = 0;
        int prev = 0;
        for(int value : nums){
            cost += t[prev][value];
            prev = value;
        }
        cost += t[prev][0];
        if(cost == k) ans++;
    }while(next_permutation(nums.begin(), nums.end()));
    cout << ans << endl;
}