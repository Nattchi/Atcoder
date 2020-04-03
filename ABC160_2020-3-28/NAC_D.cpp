/*
・反省点
組み合わせ全列挙では間に合わない
BFS の実装ができるように
*/
#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
const int INF = 1000000000;

int main() {
    int n, x, y;
    cin >> n >> x >> y;
    x--;
    y--;
    vector<int> ans(n);
    for (int i = 1; i < n; i++){
        vector<int> dist(n, INF);
        queue<int> q;
    }
}