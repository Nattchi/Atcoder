#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int k, n;
    cin >> k >> n;

    vector<int> a(n);
    vector<int> div(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n-1; i++){
        div[i] = a[i+1] - a[i];
    }
    div[n-1] = (k - a[n-1]) + a[0];

    sort(div.begin(), div.end(), greater<int>());
    cout << k - div[0] << endl;
}

