#include <stdio.h>
#define ll long long

int main() {
	ll N;
	scanf("%lld", &N);
	/* p_sizeという変数名であるがpは一切使わないので実質e_sizeである
	 * C++から移植するときに使っていた名残り */
	int p_size = 0;
	/* log[2](10^12)<40 より相異なる素因数は高々40個
	 * 実際は2-37の小さい順に12個の素数の積が10^12を超えるから11個以内である */
	int e[40] = {0};
	for (ll i = 2; i * i <= N; i++) {
		if (N % i == 0) {
			while (N % i == 0) {
				e[p_size]++;
				N /= i;
			}
			p_size++;
		}
	}
	if (N != 1) {
		e[p_size] = 1;
		p_size++;
	}

	int ans = 0;
	for (int i = 0; i < p_size; i++) {
		for (int j = 1; j <= e[i]; j++) {
			e[i] -= j;
			ans++;
		}
	}
	printf("%d\n", ans);
	return 0;
}
