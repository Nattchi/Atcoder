#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main(){
    int n;
    string s;
    cin >> n >> s;

    vector<int> scores(n+1);
    for(size_t i = 0; i < n; i++){
        if(s[i] == 'I') scores[i+1] += scores[i] + 1;
        else if(s[i] == 'D') scores[i+1] += scores[i] - 1;
    }
    int ans = *max_element(scores.begin(), scores.end());
    cout << ans << endl;
}