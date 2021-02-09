#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> a(n);
    vector<long long> b(n);
    vector<long long> sum(n);
    long long sum_a = 0;
    long long sum_b = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i] >> b[i];
        sum[i] = 2*a[i] + b[i];
        sum_a += a[i];
        sum_b += b[i];
    }

    sort(sum.begin(), sum.end(), greater<long long>());
    int count = 0;
    long long correct = 0;
    int i = 0;
    bool progress = true;

    while (progress){
        count++;
        correct += sum[i];
        if(correct > sum_a){
            progress = false;
        }
        i++;
    }
    cout << count << endl;
}