#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>

using namespace std;

bool compare(pair<string, int> p1, pair<string, int> p2){
    if(p1.first != p2.first){
        return p1.first < p2.first;
    }

    if(p1.second != p2.second){
        return p1.second > p2.second;
    }else{
        return true;
    }
}

int main(){
    int n; cin >> n;
    vector<string> s(n);
    vector<int> p(n);
    vector<pair<string, int> > v(n);

    for (int i = 0; i < n; i++) {
        cin >> s[i] >> p[i];
        v[i] = make_pair(s[i], p[i]);
    }
    sort(v.begin(), v.end(), compare);

    for (auto itr = v.begin(); itr != v.end(); itr++){
        for (int i = 0; i < n; i++) {
            if(s[i] == itr->first && p[i] == itr->second) cout << i+1 << endl;
        }
    }
}