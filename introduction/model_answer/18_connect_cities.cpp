#include <bits/stdc++.h>
using namespace std;

class UnionFind {
	int _n;
	int *parent;

public:
	UnionFind(int n);
	int find(int i);
	int merge(int i, int j);
	int size();
	int size(int i);
	int count_group();
};

int main() {
	int N, M;
	cin >> N >> M;
	UnionFind towns(N);
	for (int i = 0; i < M; i++) {
		int A, B;
		cin >> A >> B;
		towns.merge(A-1, B-1);
	}
	cout << towns.count_group() - 1 << endl;
	return 0;
}

UnionFind::UnionFind(int n) {
	_n = n;
	parent = new int[n];
	for (int i = 0; i < n; i++) {
		parent[i] = -1;
	}
}

int UnionFind::find(int i) {
	assert(0 <= i && i < _n);
	if (parent[i] < 0) {
		return i;
	} else {
		return parent[i] = find(parent[i]);
	}
}

int UnionFind::merge(int i, int j) {
	assert(0 <= i && i < _n);
	assert(0 <= j && j < _n);
	int x, y;
	x = find(i);
	y = find(j);
	if (x == y) {
		return x;
	}
	if (-parent[x] < -parent[y]) {
		swap(x, y);
	}
	parent[x] += parent[y];
	return parent[y] = x;
}

int UnionFind::size() {
	return _n;
}

int UnionFind::size(int i) {
	assert(0 <= i && i < _n);
	return -parent[find(i)];
}

int UnionFind::count_group() {
	int result = 0;
	for (int i = 0; i < _n; i++) {
		if (parent[i] < 0) {
			result++;
		}
	}
	return result;
}
