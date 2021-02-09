#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 1000000000000000000
using namespace std;

bool is_negative(long long int l){// 負の数が true
    return (l < 0);
}

int main(){
    int N;
    cin >> N;
    vector<long long> A(N);
    long long ans = 1;

    for (int i = 0; i < N; i++){
        cin >> A[i];
    }
    //cout << A.size() << endl;
    if(count(A.begin(), A.end(), 0) > 0){
        cout << "0" << endl;
        return 0;
    }else {
        for (int i = 0; i < N; i++) {
            if(A[i] < 0){
                cout << "-1" << endl;
                return 0;
            }else if(ans <= MAX / A[i]){
                ans *= A[i];
            }else{
                cout << "-1" << endl;
                return 0;
            }
        }
        cout << ans << endl;
    }
}