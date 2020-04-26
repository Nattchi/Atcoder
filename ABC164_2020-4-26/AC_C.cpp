#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<string> S(n);
    for (int i = 0; i < n; i++){
        cin >> S[i];
    }
    sort(S.begin(), S.end());
    S.erase(unique(S.begin(), S.end()), S.end());
    cout << S.size() << endl;
}