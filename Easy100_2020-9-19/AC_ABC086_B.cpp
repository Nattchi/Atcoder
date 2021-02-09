#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    string a, b;
    cin >> a >> b;
    int num = stoi(a+b);
    int r = sqrt(num);

    if(r*r == num){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}