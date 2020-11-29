#include <stdio.h>

int main() {
	char S[7];
	scanf("%s", S);
	int ans = 0;
	for (int i = 0; i < 6; i++) {
		if (S[i] == '1') {
			ans++;
		}
	}
	printf("%d\n", ans);
	return 0;
}
