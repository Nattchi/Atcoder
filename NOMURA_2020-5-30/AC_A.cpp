#include <iostream>
using namespace std;

int main(){
    int H1, M1, H2, M2, K;
    cin >> H1 >> M1 >> H2 >> M2 >> K;

    int wakeup_time = 0;

    if(M1 >= M2){
        H2 -= 1;
        wakeup_time += (M2 + 60) - M1;
    }else{
        wakeup_time += M2 - M1;
    }
    wakeup_time += (H2 - H1) * 60;

    if(wakeup_time >= K){
        cout << wakeup_time - K << endl;
    }else{
        cout << 0 << endl;
    }
}