#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>
#include <utility>

using namespace std;

int main(){
    int n;
    string s;
    cin >> n >> s;

    vector<char> vs;
    for(size_t i = 0; i < s.size(); i++){
        if(s[i] == 'x' && vs.size() >= 2){
            int last = (int)vs.size();
            if (vs[last-1] == 'o' && vs[last-2] == 'f'){
                vs.pop_back();
                vs.pop_back();
                continue;
            }
        }
        vs.push_back(s[i]);
    }

    long long ans = vs.size();
    cout << ans << endl;
}