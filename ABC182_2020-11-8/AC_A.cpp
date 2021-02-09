#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int max = 2 * a + 100;
    int ans = max - b;
    cout << ans << endl;
}