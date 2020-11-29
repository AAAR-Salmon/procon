#include <stdio.h>
#include <string.h>
#define ll long long

/* ランレングス圧縮に由来 */
typedef struct {
	char k;       /* key */
	int l;       /* length */
} runlength;

int main() {
	char S[101];
	ll K;
	scanf("%s%lld", S, &K);
	int s_size = 0;
	runlength s[100];
	s[s_size].k = S[0];
	s[0].l = 1;
	for (size_t i = 1; i < strlen(S); i++) {
		if (S[i] == s[s_size].k) {
			s[s_size].l++;
		} else {
			s_size++;
			s[s_size].k = S[i];
			s[s_size].l = 1;
		}
	}
	s_size++;
	/* この段階でS="aabcccdddde"ならば
	 * s={{'a',2}, {'b',1}, {'c',3}, {'d',4}, {'e',1}}
	 * のような配列になっている */

	ll ans = 0;
	if (s_size == 1) {
		ans = strlen(S) * K / 2;
	} else {
		for (int i = 0; i < s_size; i++) {
			ans += s[i].l / 2;
		}
		ans *= K;
		if (s[0].k == s[s_size-1].k) {
			ans += ((s[0].l + s[s_size-1].l) / 2 - s[0].l / 2 - s[s_size-1].l / 2) * (K - 1);
		}
	}
	printf("%lld\n", ans);;
	return 0;
}
