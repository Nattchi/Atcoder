#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    long long ans = 0;
    vector<int> A(N);
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    auto search_end = A.end();
    while(search_end != A.begin()){
        auto result = max_element(A.begin(), search_end);
        for(auto itr = result; itr != search_end; itr++){
            ans += *result - *itr;
        }
        search_end = result;
    }
    cout << ans << endl;
}
