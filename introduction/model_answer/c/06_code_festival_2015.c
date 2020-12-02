#include <stdio.h>
#include <string.h>

int main() {
	char S[101];
	scanf("%s", S);
	S[strlen(S) - 1] = '5';
	printf("%s\n", S);
	return 0;
}
