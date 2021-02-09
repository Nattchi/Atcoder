#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    int cost = 0;
    vector<int> p(N);
    for (int i = 0; i < N; i++){
        cin >>p[i];
    }
    sort(p.begin(), p.end());
    for (int i = 0; i < K; i++){
        cost += p[i];
    }

    cout << cost << endl;
}