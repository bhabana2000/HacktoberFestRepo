#include<bits/stdc++.h>

using namespace std;

int xtoi(string s) {

	int i = 0;
	while (s[i] == ' ')
		i++;

	bool is_neg = false;

	if (s[i] == '-') {
		is_neg = true;
		i++;
	}
	else if (s[i] == '+') {
		i++;
	}

	long long ans = 0;
	while (i < s.size() && isdigit(s[i])) {
		ans *= 10;
		ans += (s[i] - '0');
		i++;
	}
	if (is_neg)
		ans *= -1;
	if (ans > INT_MAX)
		ans = INT_MAX;
	if (ans < INT_MIN)
		ans = INT_MIN;
	return (int)ans;
}

int main() {
	string x = "    -542136241981";
	cout << xtoi(x);
	return 0;
}
