#include <stdio.h>
#include <stdlib.h>

/* 比較関数
 * C言語ではソートがクイックソートしか組み込まれていない上、
 * 比較関数を自分で定義しないといけません */
int comp(const void *a, const void *b) {
	int A = *(int*) a;
	int B = *(int*) b;
	return A - B;
}

int main() {
	int A[4];
	for (int i = 0; i < 4; i++) {
		scanf("%d", &A[i]);
	}
	/* qsort(配列の先頭ポインタ, 配列の長さ, 配列の1要素あたりの大きさ, 比較関数) */
	qsort(A, 4, sizeof(int), comp);
	if (A[0] + A[3] == A[1] + A[2]) {
		printf("Yes\n");
	} else if (A[0] + A[1] + A[2] == A[3]) {
		printf("Yes\n");
	} else {
		printf("No\n");
	}
	return 0;
}
