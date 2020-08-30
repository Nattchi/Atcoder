#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string S, T;
    cin >> S >> T;

    int s_size = S.size();
    int t_size = T.size();
    int size = s_size - t_size;
    int n = T.size();
    int count;
    for(int i = 0; i <= size; i++){
        count = 0;
        for(int j = 0; j < t_size; j++){
            if(S[i+j] != T[j]) count++;
        }
        n = min(n, count);
    }
    cout << n << endl;
}