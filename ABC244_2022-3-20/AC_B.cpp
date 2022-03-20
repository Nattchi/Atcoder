#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>
#include <cmath>
#include <queue>
#include <deque>

using namespace std;
using ll = long long;
using ld = long double;
#define rep(i, n) for(ll i=0;i<ll(n);i++)
#define REP(i, s, n) for(ll i=(ll)(s);i<(ll)(n);i++)

struct Takahashi{
    ll x;
    ll y;
    const char *direction;
};

void transpose(Takahashi* taka){
    if(taka->direction == "E"){
        taka->direction = "S";
    }else if(taka->direction == "S"){
        taka->direction = "W";
    }else if(taka->direction == "W"){
        taka->direction = "N";
    }else if(taka->direction == "N"){
        taka->direction = "E";
    }
}

void move(Takahashi* taka){
    if(taka->direction == "E"){
        taka->x++;
    }else if(taka->direction == "S"){
        taka->y--;
    }else if(taka->direction == "W"){
        taka->x--;
    }else if(taka->direction == "N"){
        taka->y++;
    }
}

int main() {
    ll n; string t; cin >> n >> t;

    Takahashi taka = Takahashi{0, 0, "E"};
    for (int i = 0; i < t.size(); ++i) {
        if(t[i] == 'S'){
            move(&taka);
        }else{
            transpose(&taka);
        }
    }
    cout << taka.x << " " << taka.y << endl;
}