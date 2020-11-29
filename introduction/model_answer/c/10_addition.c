#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	int count_odds = 0;
	for (int i = 0; i < N; i++) {
		int A;
		scanf("%d", &A);
		if (A % 2 == 1) {
			count_odds++;
		}
	}
	printf("%s\n", count_odds % 2 == 0 ? "YES" : "NO");
	return 0;
}
