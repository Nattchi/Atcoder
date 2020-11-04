#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> x(n);
    vector<int> y(n);
    for(int i = 0; i < n; i++){
        cin >> x[i] >> y[i];
    }
    bool found = false;

    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            for(int k = j; k < n; k++){
                if(i == j || j == k || i == k) continue;
                vector<int> dx = {x[i], x[j], x[k]};
                int dx1 = dx[1] - dx[0];
                int dx2 = dx[2] - dx[0];

                vector<int> dy = {y[i], y[j], y[k]};
                int dy1 = dy[1] - dy[0];
                int dy2 = dy[2] - dy[0];
                if(dx2*dy1 == dx1*dy2) {
                    found=true;
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }

    if(found) {
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}