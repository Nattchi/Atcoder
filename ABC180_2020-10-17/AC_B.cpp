#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> x(n);
    long long m = 0;
    long double y = 0;
    for(int i = 0; i < n; i++){
        cin >> x[i];
        m += abs(x[i]);
        y += (x[i]*x[i]);
    }
    sort(x.begin(), x.end());
    long long t = max(abs(x[0]), abs(x[n-1]));

    cout << m << endl;
    printf("%.15Lf\n", sqrtl(y));
    cout << t << endl;
}