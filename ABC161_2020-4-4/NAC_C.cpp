/*
・検証力不足、実際に手を動かす
*/
#include <iostream>
using namespace std;

int main() {
    unsigned long long N, K, answer;
    cin >> N >> K;
    answer = N % K < K - (N % K) ? N % K : K - (N % K);
    cout << answer << endl;
}