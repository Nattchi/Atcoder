#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>

using namespace std;

int main(){
    long double a, b; cin >> a >> b;
    long double ans = b * 100 / a;
    cout << 100 - ans << endl;
}