#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int S;
	cin >> S;
	ll *A = new ll[S+1];
	A[0] = 1;
	A[1] = A[2] = 0;
	for (int i = 3; i <= S; i++) {
		A[i] = (A[i-3] + A[i-1]) % 1000000007;
	}
	cout << A[S] << endl;
	return 0;
}
