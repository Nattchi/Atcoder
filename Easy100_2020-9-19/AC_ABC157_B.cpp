#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> a(9);
    for(int i = 0; i < 9; i++){
        cin >> a[i];
    }

    int n;
    cin >> n;
    vector<int> b(n);
    bool card[3][3] = {};
    for(int i = 0; i < n; i++){
        cin >> b[i];
        for(int j = 0; j < 9; j++){
            if(b[i] == a[j]){
                card[j/3][j%3] = true;
            }
        }
    }

    bool isBingo = (card[0][0]&&card[0][1]&&card[0][2]) || (card[1][0]&&card[1][1]&&card[1][2]) ||
            (card[2][0]&&card[2][1]&&card[2][2]) ||(card[0][0]&&card[1][0]&&card[2][0]) ||(card[0][1]&&card[1][1]&&card[2][1]) ||
            (card[0][2]&&card[1][2]&&card[2][2]) ||(card[0][0]&&card[1][1]&&card[2][2]) ||(card[0][2]&&card[1][1]&&card[2][0]);

    if(isBingo){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}