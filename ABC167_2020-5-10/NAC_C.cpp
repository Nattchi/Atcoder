/*
買う、買わないで考えて、bit全探索
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N, M, X;
    cin >> N >> M >> X;

    vector<int> cost(N);
    vector<vector<int> > understand_rate(N, vector<int>(M));

    for (int i = 0; i < N; i++){
        cin >> cost[i];
        for (int j = 0; j < M; j++){
            cin >> understand_rate[i][j];
        }
    }

    //参考書の選択パターンの集合
    vector<int> passed_cost;
    for (int bit = 0; bit < (1<<N); bit++){//(1 << N) で 2 ^ N を表している
        vector<int> S;
        vector<int> rate(M);
        int payed = 0;

        for (int i = 0; i < N; i++){
            if(bit & (1<<i) ){//& : 両方のビットが 1のとき、 1となる
                S.push_back(i);
            }
        }

        // bit の表す集合の出力
        for (int i = 0; i < (int)S.size(); i++) {
            payed += cost[S[i]];
            for (int j = 0; j < M; j++){
                rate[j] += understand_rate[S[i]][j];
            }
        }

        int minElement = *std::min_element(rate.begin(), rate.end());
        if(minElement >= X){
            passed_cost.push_back(payed);
        }
    }

    if(passed_cost.empty()){
        cout << "-1" << endl;
    }else{
        int min_cost = *std::min_element(passed_cost.begin(), passed_cost.end());
        cout << min_cost << endl;
    }
}