#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    vector<int> votes(N);
    int all_votes = 0;
    for (int i = 0; i < N; i++){
        cin >> votes[i];
        all_votes += votes[i];
    }
    sort(votes.begin(), votes.end(), greater<int>());
    bool judge = true;
    for (int i = 0; i < M; i++){
        if(votes[i] * 4 * M < all_votes){
            judge = false;
        }
    }

    if(judge){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}