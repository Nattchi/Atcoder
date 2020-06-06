#include <iostream>
#include <string>
using namespace std;

string upperCase(string name) {
  for (int i = 0; i < name.size(); i++)
    //入力された文字列を大文字に変換
    name[i] = toupper(name[i]);
  return name;
}

bool samestring(string name1, string name2) {
  // upperCase関数で変換した後、等価判定
  if (upperCase(name1) == upperCase(name2))
    return true;
  else
    return false;
}

int main() {
    string s, t;
    cin >> s >> t;

    if (s == t) {
      cout << "same" << endl;
    } else if (samestring(s, t)) {
      cout << "case-insensitive" << endl;
    } else {
      cout << "different" << endl;
    }
}
