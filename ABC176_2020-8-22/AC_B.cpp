#include <iostream>
#include <string>
using namespace std;

int main(){
    string N;
    cin >> N;
    int sum = 0;
    for(int i = 0; i < N.size(); i++){
        sum += (N.at(i)-'0');
    }
    if(sum % 9 == 0){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}