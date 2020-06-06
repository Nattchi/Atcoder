#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<vector<int>> lights = {//5 * 3の領域のうち # の部分の位置
    {1, 2, 3, 4, 6, 7, 9, 10, 12, 13, 14, 15},  // 0
    {2, 4, 5, 8, 11, 13, 14, 15},  // 1
    {1, 2, 3, 6, 7, 8, 9, 10, 13, 14, 15},  // 2
    {1, 2, 3, 6, 7, 8, 9, 12, 13, 14, 15},  // 3
    {1, 3, 4, 6, 7, 8, 9, 12, 15},  // 4
    {1, 2, 3, 4, 7, 8, 9, 12, 13, 14, 15},  // 5
    {1, 2, 3, 4, 7, 8, 9, 10, 12, 13, 14, 15},  // 6
    {1, 2, 3, 6, 9, 12, 15},  // 7
    {1, 2, 3, 4, 6, 7, 8, 9, 10, 12, 13, 14, 15},  // 8
    {1, 2, 3, 4, 6, 7, 8, 9, 12, 13, 14, 15},  // 9
};

int main(){
    int N;
    cin >> N;

    vector<vector<bool>> Board(5, vector<bool>(4 * N + 1));
    string s;
    string ans = "";
    for (int i = 0; i < 5; i++){
        cin >> s;
        for(int j = 0; j < 4 * N + 1; j++){    
            if(s[j] == '#'){
              Board[i][j] = true;
            }else if(s[j] == '.'){
              Board[i][j] = false;
            }
        }
    }

    for (int i = 0; i < N; i++) {
        vector<int> light;
        int count = 1;
        int num = -1;
        
        for(int j = 1; j <= 5; j++){
            for(int k = 1; k <= 3; k++){ 
              int start = 4 * i;
              if(Board[j-1][start+k]) light.push_back(3*(j-1)+k);
              count++;
            }
        }
        
        for (int j = 0; j < 10; j++){
            if (light == lights[j]) {
                num = j;
            }
    	}
        
        if (num != -1){
            ans += to_string(num);
        } 
    }

    cout << ans << endl;
}