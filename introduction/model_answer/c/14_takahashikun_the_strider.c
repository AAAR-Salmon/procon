#include <stdio.h>

int main() {
	int X;
	scanf("%d", &X);
	for (int i = 1; i <= 360; i++) {
		if (i * X % 360 == 0) {
			printf("%d\n", i);
			break;
		}
	}
	return 0;
}
