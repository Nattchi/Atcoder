#include <iostream>
#include <string>
using namespace std;

char next_char(int i, string T){
    return T[i + 1];
}

string replace(int i, string T){
    switch(T[i]){
        case 'P':
            if(next_char(i, T) == '?'){
                T[i + 1] = 'D';
            }
            break;
        case 'D':
            if(next_char(i, T) == '?'){
                T[i + 1] = 'D';
            }
            break;
        case '?':

            break;
    }
}

int main() {
    string T;
    cin >> T;

    for (int i = 0; i < T.length(); i++){
        if(T[i] == '?'){
            T[i] = 'D';
        }
    }

    cout << T << endl;
}