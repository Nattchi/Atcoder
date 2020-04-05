//~14:54
#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main(){
    int n, m, x;
    cin >> n >> m >> x;
    set<int> costs;
    int input, front_cost, back_cost = 0;
    for (int i = 0; i < m; i++){
        cin >> input;
        costs.insert(input);
    }
    
    for (int i = 0; i < x; i++){
        if(costs.count(i) == 1){//料金所
            front_cost++;
        }
    }

    for (int i = x+1; i < n; i++){
        if(costs.count(i) == 1){//料金所
            back_cost++;
        }
    }

    if(front_cost > back_cost){
        cout << back_cost << endl;
    }else{
        cout << front_cost << endl;
    }
}