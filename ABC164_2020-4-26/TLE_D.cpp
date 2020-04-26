/*
~方針~
・文字列の長さを求め、長さ分の桁の数字の最大値(すべて9) を 2019 で割る
-> その桁数で、2019 の倍数が何個あるのかわかるので、これをすべて生成
・std::count 関数で、生成した数字を文字列に変換したものの数をカウントしていくことで、
条件を満たす組の数を求める

・問題点
2019 の倍数を数字として扱うので、unsigned long long 型の最大値の桁数より検索部分の文字列が長ければ、
(およそ20桁以上) カウントすることができない
*/
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    string s;
    cin >> s;
    int length = s.length();
    int matched = 0;
    int num = 0;
    vector<string> S(length);
    string max;
    for (int i = 0; i < length; i++){
        S[i] = s[i];
        max += "9";
    }
    //cout << max << endl;
    
    unsigned long long multiple = stoull(max) / 2019;
    //cout << multiple << endl;
    //cout << 2019 * multiple << endl;
    
    for (unsigned long long i = 1; i <= multiple; i++) {
        //cout << to_string(2019 * i) << endl;
        string search = to_string(2019 * i);
        num = count(S.begin(), S.end(), search);
        matched += num;
    }
    cout << matched << endl;
}