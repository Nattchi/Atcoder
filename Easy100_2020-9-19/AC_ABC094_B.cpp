#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, m ,x;
    cin >> n >> m >> x;
    vector<int> a(m);
    int left_cost = 0;
    int right_cost = 0;
    for(int i = 0; i < m; i++){
        cin >> a[i];
        if(a[i] < x){
            left_cost++;
        }else{
            right_cost++;
        }
    }
    int ans = min(left_cost, right_cost);
    cout << ans << endl;
}