#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>

using namespace std;

uint64_t binomial(uint64_t n, uint64_t r){
    auto v = std::vector<uint64_t>(n + 1, 1);

    for (uint64_t i = 1; i <= n; i++) {
        for (uint64_t j = i - 1; j > 0; j--) {
            v[j] += v[j - 1];
        }
    }
    return v[r];
}

int main(){
    int l;
    cin >> l;
    long long ans = binomial(l-1, 11);
    cout << ans << endl;
}
