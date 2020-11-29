#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ll N;
	cin >> N;
	map<ll, int> P;
	for (ll i = 2; i * i <= N; i++) {
		if (N % i == 0) {
			P.emplace(i, 0);
			while (N % i == 0) {
				P[i]++;
				N /= i;
			}
		}
	}
	if (N != 1) {
		P.emplace(N, 1);
	}

	int ans = 0;
	for (auto p : P) {
		for (int i = 1; i <= p.second; i++) {
			p.second -= i;
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}
