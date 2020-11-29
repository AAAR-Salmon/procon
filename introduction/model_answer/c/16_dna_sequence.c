#include <stdio.h>

int main() {
	int N;
	char S[5001];
	scanf("%d%s", &N, S);
	int sumA[5001] = {0};
	int sumT[5001] = {0};
	int sumC[5001] = {0};
	int sumG[5001] = {0};
	for (int i = 0; i < N; i++) {
		sumA[i+1] = sumA[i];
		sumT[i+1] = sumT[i];
		sumC[i+1] = sumC[i];
		sumG[i+1] = sumG[i];
		switch (S[i]) {
			case 'A':
				sumA[i+1]++;
				break;
			case 'T':
				sumT[i+1]++;
				break;
			case 'C':
				sumC[i+1]++;
				break;
			case 'G':
				sumG[i+1]++;
				break;
		}
	}

	int ans = 0;
	for (int i = 1; i < N+1; i++) {
		for (int j = 0; j < i; j++) {
			int A = sumA[j] - sumA[i];
			int T = sumT[j] - sumT[i];
			int C = sumC[j] - sumC[i];
			int G = sumG[j] - sumG[i];
			if (A == T && C == G) {
				ans++;
			}
		}
	}
	printf("%d\n", ans);
	return 0;
}
