#include <stdio.h>
#include <string.h>
#define ll long long

int main() {
	ll N;
	scanf("%lld", &N);
	ll L = 0, X = 1;
	while (N - X >= 0) {
		N -= X;
		L++;
		X *= 26;
	}

	/* log[26](10^15+1)<11より多くとも11文字です */
	char ans[12];
	memset(ans, 'a', L);
	ans[L] = '\0';
	for (int i = L - 1; i >= 0; i--) {
		ans[i] += N % 26;
		N /= 26;
	}
	printf("%s\n", ans);
	return 0;
}
