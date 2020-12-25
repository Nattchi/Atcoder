#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>

using namespace std;

int main(){
    long long a, b, c, k;
    cin >> a >> b >> c >> k;
    long long ans = k % 2 == 0 ? a-b : b-a;
    cout << ans << endl;
}