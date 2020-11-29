#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ll N;
	cin >> N;
	ll L = 0, X = 1;
	while (N - X >= 0) {
		N -= X;
		L++;
		X *= 26;
	}

	string ans(L, 'a');
	for (int i = L - 1; i >= 0; i--) {
		ans[i] += N % 26;
		N /= 26;
	}
	cout << ans << endl;
	return 0;
}
