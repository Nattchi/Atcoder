#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <map>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    map<string, int> m;
    m.insert(make_pair("red", 0));
    m.insert(make_pair("orange", 0));
    m.insert(make_pair("yellow", 0));
    m.insert(make_pair("blue", 0));
    m.insert(make_pair("lightblue", 0));
    m.insert(make_pair("green", 0));
    m.insert(make_pair("brown", 0));
    m.insert(make_pair("gray", 0));
    int colors = 0;
    int changeable = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] >= 3200){
            changeable++;
        }else if(a[i] >= 2800){
            if(m["red"] == 0) m["red"]++;
        }else if(a[i] >= 2400){
            if(m["orange"] == 0) m["orange"]++;
        }else if(a[i] >= 2000){
            if(m["yellow"] == 0) m["yellow"]++;
        }else if(a[i] >= 1600){
            if(m["blue"] == 0) m["blue"]++;
        }else if(a[i] >= 1200){
            if(m["lightblue"] == 0) m["lightblue"]++;
        }else if(a[i] >= 800){
            if(m["green"] == 0) m["green"]++;
        }else if(a[i] >= 400){
            if(m["brown"] == 0) m["brown"]++;
        }else{
            if(m["gray"] == 0) m["gray"]++;
        }
    }
    for(auto itr = m.begin(); itr != m.end(); ++itr) {
//        cout << itr->first << " " << itr->second << endl;
        if(itr->second > 0) colors++;
    }
    cout << max(colors, 1) << " " << (colors+changeable) << endl;
}