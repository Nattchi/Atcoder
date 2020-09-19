#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> d1(n);
    vector<int> d2(n);
    int count = 0;
    for(int i = 0; i < n; i++){
        cin >> d1[i] >> d2[i];
        if(d1[i] == d2[i]){
            count++;
            if(count >= 3) {
                cout << "Yes" << endl;
                return 0;
            }
        }else{
            count = 0;
        }
    }
    cout << "No" << endl;
}