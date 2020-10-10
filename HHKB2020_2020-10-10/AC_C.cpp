#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<bool> p(n+1, true);

    int input;
    int ans = 0;
    for(int i = 0; i < n; i++){
        cin >> input;
        p[input] = false;
        auto itr = find(p.begin()+ans, p.end(), true);
        ans = itr - p.begin();
        cout << ans << endl;
    }
}