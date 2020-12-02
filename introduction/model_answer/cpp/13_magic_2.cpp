#include <bits/stdc++.h>
using namespace std;

int main() {
	int A,B,C,K;
	cin >> A >> B >> C >> K;
	for (int i = 0; i < K; i++) {
		if (A >= B) {
			B *= 2;
		} else if (B >= C) {
			C *= 2;
		}
	}
	cout << (A < B && B < C ? "Yes" : "No") << endl;
	return 0;
}
