#include <bits/stdc++.h>
using namespace std;

int main() {
	int L, R, d;
	cin >> L >> R >> d;
	int ans = R / d - (L + d - 1) / d + 1;
	cout << ans << endl;
	return 0;
}
