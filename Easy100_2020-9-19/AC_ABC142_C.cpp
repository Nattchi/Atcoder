#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a;
    vector<int> order(n+1);
    for(int i = 1; i <= n; i++){
        cin >> a;
        order[a] = i;
    }

    for(int i = 1; i <= n; i++){
        cout << order[i] << " ";
    }
    cout <<"\n";
}