#include <iostream>
using namespace std;

int main() {
    long long x;
    cin >> x;

    long long gohyaku = x / 500;
    long long go = (x - gohyaku * 500) / 5;

    // cout << "500 * " << gohyaku << endl;
    // cout << "5 * " << go << endl;

    cout << gohyaku * 1000 + go * 5 << endl;
}
