#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>

using namespace std;

vector<long long> divisor(long long n) {
    vector<long long> ret;
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            ret.push_back(i);
            if (i * i != n) ret.push_back(n / i);
        }
    }
    sort(ret.begin(), ret.end()); // 昇順に並べる
    return ret;
}

int main(){
    long long n; cin >> n;
    vector<long long> v = divisor(n);
    long long ans = 0;

    for(long long x : v){
        if(x % 2 != 0) ans++;
    }
    cout << ans * 2 << endl;
}