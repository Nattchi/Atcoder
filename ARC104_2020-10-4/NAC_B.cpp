#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    string s;
    cin >> n >> s;

    long long ans = 0;
    for(int i = 0; i < n; i++){
        // 各文字の個数を a, t, c, g とする。
        int x = 0;// x = a - t
        int y = 0;// y = c - g とし、 x = 0 && y = 0 である個数を数える
        for(int j = i; j < n; j++){
            switch(s[j]){
                case 'A':
                    x++;
                    break;
                case 'T':
                    x--;
                    break;
                case 'C':
                    y++;
                    break;
                case 'G':
                    y--;
                    break;
            }
            if(x == 0 && y == 0) ans++;
        }
    }
    cout << ans << endl;
}