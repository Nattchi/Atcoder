#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int dis = abs(b - a);
    if(dis == 0) {
        cout << dis << endl;
        return 0;
    }
    int ans = 10000000;
    for(int i = 0; i <= dis/10+1; i++){
        for(int j = 0; j <= dis/5+1; j++){
            for(int k = 0; k <= dis; k++){
                vector<int> change = {i*10+j*5+k, i*10+j*5-k, i*10-j*5+k, i*10-j*5-k};
                for(size_t l = 0; l < change.size(); l++) {
                    if (change[l] == dis) {
                        ans = min(ans, i + j + k);
                    }
                }
            }
        }
    }
    cout << ans << endl;
}