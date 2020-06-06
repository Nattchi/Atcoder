#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N, M, Q;
    cin >> N >> M >> Q;

    int query_type = 0;
    int person_num = 0;
    int question_num = 0;
    
    vector<vector<bool> > result(N, vector<bool>(M));
    vector<int> scores(M, N);

    for (int i = 0; i < Q; i++){
        int score = 0;
        cin >> query_type;

        switch (query_type){
        case 1:
            cin >> person_num;
            
            for (int j = 0; j < result[person_num-1].size(); j++) {
                if(result[person_num-1][j]){
                    score += scores[j];
                }
            }
            cout << score << endl;
            break;
        case 2:
            cin >> person_num;
            cin >> question_num;

            result[person_num-1][question_num-1] = true;
            scores[question_num-1] -= 1;
            break;
        }
    }
}