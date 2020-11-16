#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> p(n);
    vector<int> q(n);
    for(int i = 0; i < n; i++){
        cin >> p[i];
    }
    for(int i = 0; i < n; i++){
        cin >> q[i];
    }
    vector<int> nums;
    for(int i = 1; i <= n; i++) nums.push_back(i);
    int count = 0;
    int a = 0; int b = 0;
    do{
        count++;
        bool p_flag = true;
        bool q_flag = true;
        for(int i = 0; i < n; i++){
            if(p[i] != nums[i]) p_flag = false;
            if(q[i] != nums[i]) q_flag = false;
        }
        if (p_flag) a = count;
        if (q_flag) b = count;
    }while(next_permutation(nums.begin(), nums.end()));
    int ans = abs(a - b);
    cout << ans << endl;
}