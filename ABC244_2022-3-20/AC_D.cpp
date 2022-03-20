#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>
#include <cmath>
#include <queue>
#include <deque>

using namespace std;
using ll = long long;
using ld = long double;
#define rep(i, n) for(ll i=0;i<ll(n);i++)
#define REP(i, s, n) for(ll i=(ll)(s);i<(ll)(n);i++)

int main() {
    string s1, s2, s3, t1, t2, t3;
    cin >> s1 >> s2 >> s3 >> t1 >> t2 >> t3;
    ll completed = 0;
    if(s1 == t1) completed++;
    if(s2 == t2) completed++;
    if(s3 == t3) completed++;

    if (completed != 1) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}