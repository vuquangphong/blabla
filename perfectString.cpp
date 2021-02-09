#include <iostream>

using namespace std;

bool perfectString(string s);

int main() {
	string s;
	cin >> s;
	if (perfectString(s)) {
		cout << "Yes";
	} else {
		cout << "No";
	}
	return 0;
}

bool perfectString(string s) {
	int a[123];
	for (int i = 0; i < 123; i++) {
		a[i] = 0;
	}
	for (int i = 0; i < s.length(); i++) {
		a[s[i]]++;
	}
	for (int i = 0; i < 123; i++) {
		if (a[i] % 2 == 1) return false;
	}
	return true;
}
