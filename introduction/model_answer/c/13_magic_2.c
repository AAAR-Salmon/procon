#include <stdio.h>

int main() {
	int A, B, C, K;
	scanf("%d%d%d%d", &A, &B, &C, &K);
	for (int i = 0; i < K; i++) {
		if (A >= B) {
			B *= 2;
		} else if (B >= C) {
			C *= 2;
		}
	}
	printf("%s\n", A < B && B < C ? "Yes" : "No");
	return 0;
}
