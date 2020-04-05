/*
・反省点
N個の要素を全走査中にソート -> O(N^2 log N) ということに気づく
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, pop;
    cin >> n;
    vector<long long> nums(n);
    vector<long long> keep(n);

    for (int i = 0; i < n; i++){
        cin >> keep.at(i);
    }

    for (int i = 0; i < n; i++){
        nums = keep;
        pop = nums.at(i);  // nums.at(i) pop
        nums.erase(nums.begin() + i);
        sort(nums.begin(), nums.end());
        cout << nums.at(n / 2 - 1) << endl;// nums.at(n / 2) が中央値 これを出力
    }
}