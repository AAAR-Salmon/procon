#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	string S;
	ll K;
	cin >> S >> K;
	vector<pair<char, int>> s;
	s.push_back(make_pair(S[0], 1));
	for (size_t i = 1; i < S.length(); i++) {
		if (S[i] == s.back().first) {
			s.back().second++;
		} else {
			s.push_back(make_pair(S[i], 1));
		}
	}

	ll ans = 0;
	if (s.size() == 1) {
		ans = S.length() * K / 2;
	} else {
		for (size_t i = 0; i < s.size(); i++) {
			ans += s[i].second / 2;
		}
		ans *= K;
		if (s.front().first == s.back().first) {
			ans += ((s.front().second + s.back().second) / 2 - s.front().second / 2 - s.back().second / 2) * (K - 1);
		}
	}
	cout << ans << endl;
	return 0;
}
