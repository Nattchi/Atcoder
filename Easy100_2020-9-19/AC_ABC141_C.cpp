#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main(){
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> a(q);
    vector<int> scores(n, k-q);
    for(int i = 0; i < q; i++){
        cin >> a[i];
        scores[a[i]-1]++;
    }

    for(int i = 0; i < n; i++){
        if(scores[i] > 0){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
}