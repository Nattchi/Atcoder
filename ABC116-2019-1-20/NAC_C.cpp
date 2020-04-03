#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> flowers(n);
    int ans = 0;
    int active = 0;
    for (int i = 0; i < n; i++){
        cin >> flowers.at(i);
    }

    for (int i = 0; i < n; i++){
        if(active >= flowers.at(i)){
            active = flowers.at(i);
        }else{
            ans += flowers.at(i) - active;
            active = flowers.at(i);
        }
    }
}