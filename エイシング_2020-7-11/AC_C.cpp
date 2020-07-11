#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> ans(N + 1);
    int n = sqrt(N);
    for (int x = 1; x < n; x++){
        for (int y = 1; y < n; y++){
            for (int z = 1; z < n; z++){
                int a = (x + y + z)*(x + y + z) - (x*y + y*z + z*x);
                if(a >= 1 && a <= N) ans[a]++;
            }
        }
    }

    for (int i = 1; i <= N; i++){
        cout << ans[i] << endl;
    }
}