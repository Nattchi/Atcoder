#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>

using namespace std;

bool check(string s){
    bool iskey = false;
    int k_idx = find(s.begin(), s.end(), 'k') - s.begin();
    int e1_idx = find(s.begin()+k_idx, s.end(), 'e') - s.begin();
    int y_idx = find(s.begin()+e1_idx, s.end(), 'y') - s.begin();
    int e2_idx = find(s.begin()+y_idx, s.end(), 'e') - s.begin();
    int n_idx = find(s.begin()+e2_idx, s.end(), 'n') - s.begin();
    int c_idx = find(s.begin()+n_idx, s.end(), 'c') - s.begin();
    int e3_idx = find(s.begin()+c_idx, s.end(), 'e') - s.begin();
    vector<int> v = {e3_idx-c_idx, c_idx-n_idx, n_idx-e2_idx, e2_idx-y_idx, y_idx-e1_idx, e1_idx-k_idx};
    int count = 0;
    for(size_t i = 0; i < v.size(); i++){
//            cout << v[i] << endl;
        if(v[i] > 1) count++;
    }
    if(count == 1) iskey = true;
//        cout << count << endl;
    return  iskey;
}

int main(){
    string s; cin >> s;
    bool iskey = s == "keyence";
    int n = s.size();
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            string S = "";
            // delete [i, j]
            for(int k = 0; k < n; k++){
                if(i <= k && k <= j){
                    continue;
                }else{
                    S.push_back(s[k]);
                }
            }
            if(S == "keyence") iskey = true;
        }
    }
    if(iskey){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}