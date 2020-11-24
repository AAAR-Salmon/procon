#include <bits/stdc++.h>
using namespace std;
/* long型は処理系によっては32bitである場合がありますが、
 * long long型は64bit以上であることが保証されます
 * int64_t型を使うのも一つの手です */
using ll = long long;

int main() {
	ll a,b,c,d;
	cin >> a >> b >> c >> d;
	cout << max({a*c, a*d, b*c, b*d}) << endl;
	return 0;
}
