#include <iostream>

using namespace std;

int main() {
	int t, l, c;
	string str;

	cin >> t;
	for (int i = 0; i < t; ++i) {
		cin >> l >> c;
		for (int i = 1; i <= l; ++i) {
			str = (i % 2 == 0) ? "*" : ".";
			for (int k = 0; k < c; ++k)  {
				str = (str == "*") ? "." : "*";
				cout << str; 
			}
			cout << endl;
		}
	}
	return 0;
}
