#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>

using namespace std;

string f(string n){
    vector<char> v1(n.size());
    vector<char> v2(n.size());
    for (size_t i = 0; i < n.size(); i++) {
        v1[i] = n[i];
        v2[i] = n[i];
    }
    sort(v1.begin(), v1.end(), greater<char>());
    sort(v2.begin(), v2.end());
    string s1 = "";
    string s2 = "";
    for (size_t i = 0; i < n.size(); i++) {
        s1 += ""s + v1[i];
        s2 += ""s + v2[i];
    }
    int f_val = stoi(s1) - stoi(s2);

    return to_string(f_val);
}

int main(){
//    long long n, k; cin >> n >> k;
    string n;
    int k;
    cin >> n >> k;

    string x = n;
    for (int i = 0; i < k; i++) {
        x = f(x);
    }
    cout << x << endl;
}