#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N, K, d;
    cin >> N >> K;
    vector<bool> sunuke(N, false);
    int sunuke_num = 0;
    int fooled = 0;
    for (int i = 0; i < K; i++){
        cin >> d;
        for (int j = 0; j < d; j++){
            cin >> sunuke_num;
            sunuke[sunuke_num - 1] = true;
        }
    }
    for (int i = 0; i < N; i++){
        if(!sunuke[i]) fooled++;
    }
    cout << fooled << endl;
}