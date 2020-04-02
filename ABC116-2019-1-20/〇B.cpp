#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int f(int n){
    if(n % 2 == 0){
        return n / 2;
    }else{
        return n * 3 + 1;
    }
}

int findIndex(int value , vector<int> vec){
    vector<int>::iterator iter = std::find( vec.begin(), vec.end(), value);
    int index = std::distance( vec.begin(), iter );
    if(index == vec.size()){
        return -1;
    }
    return index;
}

int main(){
    int s;
    cin >> s;

    vector<int> nums(1000000);
    int index = 0;
    int insert = 0;
    nums.at(index) = s;
    bool flag = true;
    while(flag){
        ++index;
        insert = f(nums.at(index - 1));
        if(findIndex(insert, nums) != -1){
            flag = false;
        }else{
            nums.at(index) = insert;
        }
    }
    cout << index + 1 << endl;
}