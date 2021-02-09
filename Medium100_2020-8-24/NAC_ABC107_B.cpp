#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>

using namespace std;

int main(){
    int h, w;
    cin >> h >> w;
    vector<vector<char> > a(h, vector<char>(w));
    vector<bool> col(h, false);
    vector<bool> row(w, false);
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cin >> a[i][j];
            if(a[i][j] == '#'){
                col[i] = true;
                row[j] = true;
            }
        }
    }

    for(int i = 0; i < h; i++){
        if(col[i]) {
            for (int j = 0; j < w; j++) {
                if (row[j]) {
                    cout << a[i][j];
                }
            }
            cout << "\n";
        }
    }
    /*
    int deleted = 1;
    while (deleted > 0){
        deleted = 0;
        for(int i = 0; i < a.size(); i++){//横方向の削除
//            cout << "a.size() = " << a.size() << " a[i].size() = " << a[i].size() << endl;
            int n = count(a[i].begin(), a[i].end(), '.');
            cout << "w: " << n << endl;
            if(n > 0 && n == a[i].size()){
                a[i].erase(a[i].begin(), a[i].end());
                deleted++;
            }
        }
        for(int j = 0; j < w; j++){//縦方向の削除
            int n = 0;
            for (int i = 0; i < a.size(); ++i) {
                if(a[i][j] == '.') n++;
            }
            cout << "h: " << n << endl;
            if(n > 0 && n == a.size()){
                deleted++;
                for (int i = 0; i < h; ++i) {
                    a[i].erase(a[i].begin());
                }
            }
        }
    }
    */
}