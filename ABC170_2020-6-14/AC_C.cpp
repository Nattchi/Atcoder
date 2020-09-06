#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int X, N;
    cin >> X >> N;

    if (N == 0) {
        cout << X << endl;
        return 0;
    }

    vector<int> P(N);
    vector<int> ans;
    for (int i = 0; i < N; i++){
        cin >> P[i];
    }
    sort(P.begin(), P.end());

    for (int a = X - (N + 1) / 2; a <= X + (N + 1) / 2; a++){
        ans.push_back(a);
    }

    for (size_t i = 0; i < P.size(); i++){
        auto result = find(ans.begin(), ans.end(), P[i]);
        if(result != ans.end()){
            ans.erase(result);
        }
    }
    int above = *lower_bound(ans.begin(), ans.end(), X);
    int dis = above - X;
    if(dis == 0){
        cout << X << endl;
        return 0;
    }

    int low = ans[0];
    for (size_t i = 0; i < ans.size(); i++) {
        // X との絶対値の小さいindex を探す
        if (ans[i] < above) {
            low = max(ans[i], low);
        }
    }
    int answer = dis < abs(low - X) ? dis : low - X;
    cout << answer + X << endl;
}