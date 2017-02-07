#include <iostream>

using namespace std;

int main() {
	int t, l, c;
	string separator, str_colun, str_line;

	cin >> t;
	str_colun = "..*";
	for (int i = 0; i < t; ++i) {
		cin >> l >> c;

		str_line  = "*";
		separator = "*";
		for (int i = 0; i < c; ++i) { separator += "***"; str_line += str_colun; }

		str_line+= "\n" + str_line;
		for (int i = 0; i < l; ++i) { cout << separator << endl << str_line << endl; }

		cout << separator << endl;
	}

	return 0;
}
