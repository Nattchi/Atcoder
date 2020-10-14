#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <regex>
using namespace std;

int main(){
    string s;
    cin >> s;

    smatch m;
    const regex re("[ACGT]+");
    vector<int> length;
    length.push_back(0);
    auto start = s.cbegin();

    while (std::regex_search(start, s.cend(), m, re)) {
        length.push_back(m.str().size());
        start = m[0].second;
    }
    int ans = *max_element(length.begin(), length.end());
    cout << ans << endl;
}