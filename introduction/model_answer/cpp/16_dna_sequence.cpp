#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	string S;
	cin >> N >> S;
	vector<map<char, int>> nb(N+1, {{'A', 0}, {'T', 0}, {'C', 0}, {'G', 0}});
	for (int i = 1; i < N+1; i++) {
		for (char c : {'A', 'T', 'C', 'G'}) {
			nb[i][c] = nb[i-1][c];
		}
		nb[i][S[i-1]]++;
	}

	int ans = 0;
	for (int i = 1; i < N+1; i++) {
		for (int j = 0; j < i; j++) {
			int A = nb[j]['A'] - nb[i]['A'];
			int T = nb[j]['T'] - nb[i]['T'];
			int C = nb[j]['C'] - nb[i]['C'];
			int G = nb[j]['G'] - nb[i]['G'];
			if (A == T && C == G) {
				ans++;
			}
		}
	}
	cout << ans << endl;
	return 0;
}
