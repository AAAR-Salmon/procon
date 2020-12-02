#include <stdio.h>
/* long型は処理系によっては32bitである場合がありますが、
 * long long型は64bit以上であることが保証されます */
#define ll long long

ll max(ll a, ll b) {
	return a < b ? b : a;
}

int main() {
	ll a, b, c, d;
	scanf("%lld%lld%lld%lld", &a, &b, &c, &d);
	printf("%lld\n", max(a * c, max(a * d, max(b * c, b * d))));
	return 0;
}
