#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<long long> a(n);
    vector<long long> b(n);
    vector<long long> c(m);
    vector<long long> d(m);
    for(int i = 0; i < n; i++) cin >> a[i] >> b[i];
    for(int i = 0; i < m; i++) cin >> c[i] >> d[i];


    for(int i = 0; i < n; i++){
        long long min_dis = 10000000000;
        int min_idx = 50;
        for(int j = 0; j < m; j++){
            long long dis = abs(a[i] - c[j]) + abs(b[i] - d[j]);
            if(dis < min_dis){
                min_dis = dis;
                min_idx = j;
            }
        }
        cout << min_idx+1 << endl;
    }
}