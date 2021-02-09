#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n+1);
    for(int i =1; i <= n; i++){
        cin >> a[i];
    }
    int ans = 0;

    for(int left = 1; left <= n; left++){
        int minimum = a[left];
        for(int right = left; right <= n; right++){
            minimum = min(minimum, a[right]);
            ans = max(ans, minimum * (right - left + 1));
        }
    }
    cout << ans << endl;
}