#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>

using namespace std;
using ll = long long;

uint64_t binomial(uint64_t n, uint64_t r){
    auto v = std::vector<uint64_t>(n + 1, 1);

    for (uint64_t i = 1; i <= n; i++)
        for (uint64_t j = i - 1; j > 0; j--)
            v[j] += v[j - 1];

    return v[r];
}

int main(){
    ll n; cin >> n;
    vector<ll> a(n+1);
    map<ll, ll> p;
    for (ll i = 1; i <= n; ++i) {
        cin >> a[i];
        p[a[i]]++;
    }
    ll sum = 0;
    for(auto m : p){
        if(m.second >= 2) sum += m.second * (m.second - 1) / 2;
    }

    for (ll i = 1; i <= n; ++i) {
        ll balls = p[a[i]];
        ll output = sum;
        output -= (balls * (balls - 1) / 2);
        balls--;
        output += (balls * (balls - 1) / 2);
        cout << output << endl;
    }
}