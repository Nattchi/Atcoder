#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <numeric>

using namespace std;

int main(){
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    vector<int> time_table = {a, b, c, d, e};
    vector<int> cost;
    int n=5;
    vector<int> v(n);
    //1刻みで格納できる関数、便利
    iota(v.begin(), v.end(), 0);
    do{
        int time_spend = 0;
        for(int i = 0; i < n; i++){
            time_spend += time_table[v[i]];
            if(time_spend % 10 != 0 && i < n-1) {
                time_spend /= 10;
                time_spend += 1;
                time_spend *= 10;
            }
        }
        cost.push_back(time_spend);
    } while (next_permutation(v.begin(), v.end()));
    int ans = *min_element(cost.begin(), cost.end());
    cout << ans << endl;
}