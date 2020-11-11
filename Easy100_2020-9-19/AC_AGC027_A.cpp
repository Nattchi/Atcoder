#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int sum = 0;
    int count = 0;
    for(int i = 0; i < n; i++){
        if(sum > x) break;
        sum += a[i];
        count++;
    }
    if(sum != x) count--;
    cout << count << endl;
}