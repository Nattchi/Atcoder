#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>
#include <sstream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int ans = 0;
    for(int i = 1; i <= n; i++){
        stringstream ss;
        ss << std::oct << i;
        string oc = ss.str();
        string dec = to_string(i);
        if(find(oc.begin(), oc.end(), '7') != oc.end()){
//            cout << i << endl;
            ans++;
            continue;
        }
        if(find(dec.begin(), dec.end(), '7') != dec.end()){
//            cout << "10: i = " << i << endl;
            ans++;
            continue;
        }
    }
    cout << n - ans << endl;
}