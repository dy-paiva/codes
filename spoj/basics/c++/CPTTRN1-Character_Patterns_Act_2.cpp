#include <iostream>

using namespace std;

int main() {
  int t, l, c;
  string str;

  cin >> t;
  for (int i = 0; i < t; ++i) {
    cin >> l >> c;
    for (int i = 0; i < l; ++i) {
      for (int k = 0; k < c; ++k)  {
        str = (k == 0 || k == c-1 || i == 0 || i == l-1) ? "*" : ".";
        cout << str;
      }
      cout << endl;
    }
  }
  return 0;
}
