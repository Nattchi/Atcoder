#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    string s_a = to_string(a);
    string s_b = to_string(b);

    int sum_a = 0;
    int sum_b = 0;
    for(size_t i = 0; i < s_a.size(); i++){
        sum_a += (s_a[i] - '0');
        sum_b += (s_b[i] - '0');
    }
    if(sum_a >= sum_b){
        cout << sum_a << endl;
    }else{
        cout << sum_b << endl;
    }
}