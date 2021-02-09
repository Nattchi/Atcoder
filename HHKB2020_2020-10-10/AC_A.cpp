#include <iostream>
#include <string>
#include <vector>
#include <locale>
#include <algorithm>

using namespace std;

int main(){
    char s, t;
    cin >> s >> t;
    std::locale l = std::locale::classic();
    if(s == 'Y'){
        cout << toupper(t, l) << endl;
    }else{
        cout << t << endl;
    }
}