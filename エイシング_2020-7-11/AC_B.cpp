#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> a(N+1);
    int ans = 0;
    for (int i = 1; i <= N; i++){
        cin >> a[i];
        if(i % 2 != 0){
            if(a[i] % 2 != 0) ans++;
        }
    }
    cout << ans << endl;
}