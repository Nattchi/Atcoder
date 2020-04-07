#include <iostream>
#include <numeric>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int judge(vector<int> v, string P, string Q, int N){
    int count = 1;
    int a, b;
    do{
        string num;
        for (int i = 0; i < N; i++){
            num += to_string(v[i]);
        }
        if(num == P){
            a = count;
        }
        if(num == Q){
            b = count;
        }
        count++;
    } while (next_permutation(v.begin(), v.end()));
    return abs(a - b);
}

int main(){
    int N;
    cin >> N;
    string P, Q, s;
    vector<int> v(N);
    iota(v.begin(), v.end(), 1);
    for (int i = 0; i < N; i++){
        cin >> s;
        P += s;
    }
    for (int i = 0; i < N; i++) {
        cin >> s;
        Q += s;
    }
    cout << judge(v, P, Q, N) << endl;
}