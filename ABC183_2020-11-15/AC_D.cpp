#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, w;
    cin >> n >> w;
    vector<int> s(n);
    vector<int> t(n);
    vector<int> p(n);
    for(int i = 0; i < n; i++){
        cin >> s[i] >> t[i] >> p[i];
    }
    int time_end = *max_element(t.begin(), t.end());
    vector<long long> a(time_end+1, 0);
    for(int i = 0; i < n; i++){
        a[s[i]] += p[i];
        a[t[i]] -= p[i];
    }
    for(int i = 0; i < time_end; i++){
        if(i > 0) a[i] += a[i-1];
    }
    long long M = *max_element(a.begin(), a.end());
    if(w >= M){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}