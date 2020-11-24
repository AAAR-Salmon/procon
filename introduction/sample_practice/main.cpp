// GCC使用時、全ての標準ライブラリをインクルードします
#include <bits/stdc++.h>
// std名前空間を省略できるようにします
using namespace std;

int main() {
	int a, b, c;
	string s;

	// 整数の入力
	cin >> a;
	cin >> b >> c;
	// 文字列の入力
	cin >> s;

	// 出力
	cout << a+b+c << " " << s << endl;

	return 0;
}
