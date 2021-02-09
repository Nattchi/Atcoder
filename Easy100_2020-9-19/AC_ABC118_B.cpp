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
    vector<int> k(n);
    vector<int> liked(m+1);
    for(int i = 0; i < n; i++){
        cin >> k[i];
        for(int j = 0; j < k[i]; j++){
            int a;
            cin >> a;
            liked[a]++;
        }
    }
    int ans = count(liked.begin(), liked.end(), n);
    cout << ans << endl;
}