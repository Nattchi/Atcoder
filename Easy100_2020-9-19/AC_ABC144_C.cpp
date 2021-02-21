#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>
#include <cmath>
#include <queue>

using namespace std;
using ll = long long;
#define rep(i,n) for(ll i=0;i<ll(n);i++)

vector<long long> enum_divisors(long long N) {
    vector<long long> res;
    for (long long i = 1; i * i <= N; ++i) {
        if (N % i == 0) {
            res.push_back(i);
            // 重複しないならば i の相方である N/i も push
            if (N/i != i) res.push_back(N/i);
        }
    }
    // 小さい順に並び替える
    sort(res.begin(), res.end());
    return res;
}

int main(){
    ll n; cin >> n;
    vector<ll> v = enum_divisors(n);
    ll size = v.size();

    ll ans = n - 1;
    for (int i = 0; i < size; ++i) {
        if(v[i] * v[size-i-1] == n){
            ans = min(v[i]+v[size-i-1]-2, ans);
        }
    }
    cout << ans << endl;
}