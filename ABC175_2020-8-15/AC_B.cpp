#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N;
    cin >> N;
    if(N <= 2){
        cout << 0 << endl;
        return 0;
    }
    vector<int> L(N+1);
    for(int i = 1; i <= N; i++){
        cin >> L[i];
    }
    int count = 0;
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            for(int k = 1; k <= N; k++){
                if(i == j || j == k || i == k) continue;
                if(L[i] == L[j] || L[j] == L[k] || L[i] == L[k]) continue;
//                cout << "(i, j, k) = " << i << j << k << endl;
                vector<int> edges(3);
                edges[0] = L[i]; edges[1] = L[j]; edges[2] = L[k];
                sort(edges.begin(), edges.end());
                long long longer = edges[0] + edges[1];
                if(edges[2] < longer) count++;
            }
        }
    }

    cout << count / 6 << endl;
}

