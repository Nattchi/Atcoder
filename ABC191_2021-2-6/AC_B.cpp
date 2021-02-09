#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>

using namespace std;

int main(){
    long long n, x; cin >> n >> x;
    vector<long long> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] != x) cout << a[i] << " ";
    }
    cout << "\n";

}