#include <bits/stdc++.h>
using namespace std;

int main() {
	int A[4];
	for (int i = 0; i < 4; i++) {
		cin >> A[i];
	}
	sort(A, A+4);
	if (A[0] + A[3] == A[1] + A[2]) {
		cout << "Yes" << endl;
	} else if (A[0] + A[1] + A[2] == A[3]) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
	return 0;
}
