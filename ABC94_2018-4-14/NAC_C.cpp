/*
~考え方~
入力される数列を X0, X1, ... , XN-1 ,
これを昇順ソートした数列を Y0, Y1, ..., YN-1 とする。
数列Y の中央値は YN/2 であり、
Y0, Y1, ... , YN/2, ..., YN-1 となり、
数列から取り除く数 Xi が、
Y0, .., YN/2-1 の部分, YN/2+1, ..., YN-1 の部分のどちらかに属するかで中央値が決まる。
Xi <  YN/2 (Xi がY0, .., YN/2-1 の部分 に属するとき)   => Xi = YN/2
Xi >= YN/2 (Xi がYN/2+1, .., YN-1 の部分 に属するとき) => Xi = YN/2-1
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<long long> nums(n);
    for (int i = 0; i < n; i++){
        cin >> nums[i];
    }
    vector<long long> keep(nums);
    sort(nums.begin(), nums.end());
    long long middle = nums[n / 2];

    for (int i = 0; i < n; i++){
        if(keep[i] < middle){
            cout << middle << endl;
        }else{
            cout << nums[n / 2 - 1] << endl;
        }
    }
}