#include <iostream>
#include <algorithm>
using namespace std;

bool check(string& s) {
	int slen = s.length();
	for (int i = 0; i < slen - 1; i++) {
		if (s[i] == s[i + 1]) return false;
	}
	return true;
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	int cnt = 0;
	cin >> s;
	sort(s.begin(), s.end());
	do {
		if (check(s))cnt++;
	} while (next_permutation(s.begin(), s.end()));
	cout << cnt;
}