#include <bits/stdc++.h>
using namespace std;

int main() {
	int a[20] = {100, 100, 200};
	for (int i = 3; i < 20; i++) {
		a[i] = a[i-1] + a[i-2] + a[i-3];
	}
	cout << a[19] << endl;
	return 0;
}
