#include <iostream>
using namespace std;

int main(){
    int A, B, C, K;
    int sum = 0;
    cin >> A >> B >> C >> K;
    
    if(A > K){
        sum = K;
    }else if((A + B) >= K){
        sum = A;
    }else{
        sum = A - (K - (A + B));
    }

    cout << sum << endl;
}