#include <iostream>
#include <string>
using namespace std;

int main(){
    int days = 0;
    string S;
    cin >> S;

    if(S[0] == 'R' && S[1] == 'R' && S[2] == 'R'){
        days = 3;
    }else if(S[0] == 'R' && S[1] == 'R'){
        days = 2;
    }else if(S[1] == 'R' && S[2] == 'R'){
        days = 2;
    }else if(S[0] == 'R'){
        days = 1;
    }else if(S[1] == 'R'){
        days = 1;
    }else if(S[2] == 'R'){
        days = 1;
    }

    cout << days << endl;
}

