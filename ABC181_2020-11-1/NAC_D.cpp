#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdlib.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    bool match = false;
    if(s.size() == 1){
        match = s == "8";
    }else if(s.size() == 2){
        int input = stoi(s);
        if(input % 8 == 0){
            match = true;
        }else{
            swap(s[0], s[1]);
            int input = stoi(s);
            if(input % 8 == 0){
                match = true;
            }
        }
    }else {
        vector<int> n(10);
        for (int i = 1; i <= 9; i++) {
            char c = '0' + i;
            n[i] = count(s.begin(), s.end(), c);
        }
        for (int i = 112; i < 1000; i+= 8) {
            int ans = 0;
            string ns = to_string(i);
            if(count(ns.begin(), ns.end(), '0') > 0) continue;
            vector<int> need_n(10);
            for (int j = 1; j <= 9; j++) {
                char c = '0' + j;
                need_n[j] = count(ns.begin(), ns.end(), c);
                if (need_n[j] >= 0 && need_n[j] <= n[j]) {
                    ans++;
                }
                if (ans == 9) {
                    match = true;
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }
    if(match){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}