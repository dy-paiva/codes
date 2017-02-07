#include <iostream>
#include <cstring>

using namespace std;

int main() {
	int t, str_len;
	string str, result;

	cin >> t;
	for (int i = 0; i < t; ++i) {
		cin >> str;
		str_len = str.length()/2;
		result = str[0];
		for (int k = 1; k*2 < str_len; ++k) {
			result += str[k*2];
		}
		cout << result << endl;
	}
	return 0;
}
