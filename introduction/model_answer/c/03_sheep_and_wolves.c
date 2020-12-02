#include <stdio.h>

int main() {
	int S, W;
	scanf("%d%d", &S, &W);
	printf("%s\n", S > W ? "safe" : "unsafe");
	return 0;
}
