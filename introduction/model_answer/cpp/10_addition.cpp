#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> A(N);
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	int count_odds = count_if(A.begin(), A.end(), [](int x) {
		return x % 2 == 1;
	});
	cout << (count_odds % 2 == 0 ? "YES" : "NO") << endl;
	return 0;
}
