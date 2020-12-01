# クラスが長いので実行内容を関数にまとめておく
def main():
	N,M=map(int,input().split())
	towns = UnionFind(N)
	for _ in range(M):
		# 0-indexedに補正して入力
		A,B=map(lambda x:int(x)-1,input().split())
		towns.merge(A,B)
	print(towns.count_group() - 1)


class UnionFind:
	def __init__(self, n):
		self.__n = n
		self.__parent = [-1] * n

	def find(self, i):
		assert 0 <= i < self.__n
		if self.__parent[i] < 0:
			return i
		else:
			self.__parent[i] = self.find(self.__parent[i])
			return self.__parent[i]

	def merge(self, i, j):
		assert 0 <= i < self.__n
		assert 0 <= j < self.__n
		x,y = self.find(i),self.find(j)
		if x == y:
			return x
		elif -self.__parent[x] < -self.__parent[y]:
			x,y = y,x
		self.__parent[x] += self.__parent[y]
		self.__parent[y] = x
		return x

	def size(self):
		return self.__n

	def size(self, i):
		assert 0 <= i < self.__n
		return -self.__parent[self.find(i)]

	def count_group(self):
		result = 0
		for p in self.__parent:
			if p < 0:
				result += 1
		return result

main()
