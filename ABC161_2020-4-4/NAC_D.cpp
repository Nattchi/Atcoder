/*
・反省点
大まかな実装の方針(BFSを用いる)はできていた
BFS, DFS を用いたやり方をマスターする
*/
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int K;
    cin >> K;
    vector<long long> nums;
    //BFSして、K個目を出力?
    for (int i = 1; i <= 9; i++){
        nums.push_back(i);
    }
    while(true){
        if(K <= nums.size()){
            cout << nums[K - 1] << endl;
            return 0;
        }
        K -= nums.size();
        vector<long long> old_nums;
        swap(old_nums, nums);
        for(long long x : old_nums){
            for (int i = -1; i <= 1; i++){//もとの数-1, もとの数と等しい, もとの数+1
                int d = x % 10 + i;
                if (d < 0 || d > 9) continue;
                long long nx = x * 10 + d;
                nums.push_back(nx);
            }
        }
    }
}