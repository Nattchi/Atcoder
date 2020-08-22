#include <iostream>
using namespace std;

int main(){
    int N, X ,T;
    cin >> N >> X >> T;
    int n = N%X == 0 ? N / X: N / X + 1;
    cout << n * T << endl;
}