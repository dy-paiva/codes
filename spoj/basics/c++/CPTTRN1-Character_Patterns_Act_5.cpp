#include <iostream>

using namespace std;

int main() {
	int t, l, c, h, w;
	string separator, str_separator, str_colun, str_line;

	cin >> t;
	for (int i = 0; i < t; ++i) {
		cin >> l >> c >> h >> w;
		
		str_line      = "*";
		str_colun     = "";
		str_separator = "*";

		for (int j = 0; j < w; ++j) { str_separator += "*"; str_colun += "."; }

		separator  = "*";
		str_colun += "*";

		for (int j = 0; j < c; ++j) { str_line += str_colun; separator += str_separator; }

		for (int j = 0; j < l; ++j) {
			cout << separator << endl;
			for (int j = 0; j < h; ++j) { cout << str_line << endl; }
		}

		cout << separator << endl;
	}

	return 0;
}
