#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> m;
    int ans = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(m.find(a[i]) == m.end()) m.insert(make_pair(a[i], 1));
        else m[a[i]]++;
    }

    for(auto itr = m.begin(); itr != m.end(); ++itr) {
        int back = 0;
        int forward = 0;
        if(m.find(itr->first-1) != m.end()) back = m[itr->first-1];
        auto tmp = itr->second;
        if(m.find(itr->first+1) != m.end()) forward = m[itr->first+1];
        int num = back + tmp + forward;
        ans = max(ans, num);
//        cout << (itr)->first << " " << itr->second << endl;
    }
    cout << ans << endl;
}