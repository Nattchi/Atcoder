#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    long long ans = 0;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    for(int i = 1; i < N; i++){
        if(A[i - 1] > A[i]){
            ans += A[i - 1] - A[i];
            A[i] = A[i - 1];
        }
    }
    cout << ans << endl;
}