#include <iostream>
using namespace std;

int main(){
    unsigned long long X, money, year, rishi;
    cin >> X;
    money = 100;
    year = 0;
    while(money < X){
        rishi = money * 0.01;
        money += rishi;
        year++;
    }
    cout << year << endl;
}