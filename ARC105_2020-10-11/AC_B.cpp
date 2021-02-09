#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    bool flag = true;

    while(flag) {
        int count = 0;
        sort(a.begin(), a.end());
        int min_v = a[0];
        for (int i = 1; i < a.size(); i++) {
            if (a[i] % min_v == 0) {
                a.erase(a.begin() + i);
                i--;
            } else {
                a[i] %= min_v;
                count++;
            }
        }
        if(count == 0) flag = false;
    }
    cout << a[0] << endl;
}