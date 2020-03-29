/*
・反省点
N 個の区間のうち最も長いものを通らず、かつ、それ以外の区間を
ちょうど 1 度だけ通るようにしてすべての家を訪ねることができることに気づけなかった
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int k, n;
    cin >> k >> n;
    vector<int> houses(n);
    for (int i = 0; i < n; i++){
        cin >> houses.at(i);
    }
    sort(houses.begin(), houses.end());

    //最初の家と最後の家の距離
    int last_dis = k - houses.at(n - 1) + houses.at(0);
    int max_dis = last_dis;
    //各家の間の距離のうち、最大のものを求める
    for (int i = 1; i < n; i++){
        //max_dis = houses.at(i) - houses.at(i - 1) > max_dis ? houses.at(i) - houses.at(i - 1) : max_dis;
        if (houses.at(i) - houses.at(i - 1) > max_dis) {
            max_dis = houses.at(i) - houses.at(i - 1);
        }
    }
    cout << k - max_dis << endl;
}