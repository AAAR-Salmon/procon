#include <stdio.h>
#define ll long long

int main() {
	int S;
	scanf("%d", &S);
	ll A[2001];
	A[0] = 1;
	A[1] = A[2] = 0;
	for (int i = 3; i <= S; i++) {
		A[i] = (A[i-3] + A[i-1]) % 1000000007;
	}
	printf("%lld\n", A[S]);
	return 0;
}
