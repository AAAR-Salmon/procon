#include <bits/stdc++.h>
using namespace std;

int main() {
	string s, t;
	cin >> s >> t;
	int ans = -1;
	string ss = s + s;
	auto rot_s_left = ss.end() - s.length();
	auto rot_s_right = ss.end();
	for (size_t i = 0; i < s.size(); i++) {
		if (equal(t.begin(), t.end(), rot_s_left, rot_s_right)) {
			ans = i;
			break;
		}
		rot_s_left--;
		rot_s_right--;
	}
	cout << ans << endl;
	return 0;
}
