#include <stdio.h>

int main() {
	int a, b, c;
	/* C言語には「文字列型」がなく、文字型配列で代用する必要があります
		このとき、最後の文字の次にヌル文字('\0')の分の領域が必要なので、制約の最大値である100よりもやや大きめに105としていますが、101でもバグが起こったことはないので問題ないと思います */
	char s[105];

	/* 整数の入力 */
	scanf("%d", &a);
	scanf("%d %d", &b, &c);
	/* 文字列の入力 */
	scanf("%s", s);

	/* 出力 */
	printf("%d %s\n", a+b+c, s);
}
