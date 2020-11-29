#include <stdio.h>

int main() {
	int L, R, d;
	scanf("%d%d%d", &L, &R, &d);
	int ans = R / d - (L + d - 1) / d + 1;
	printf("%d\n", ans);
	return 0;
}
