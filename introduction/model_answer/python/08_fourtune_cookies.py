# スペース区切りの入力を配列に格納するときはこのようにします
# 改行区切りでN個の整数を入力する場合は次のようにします
# [int(input()) for _ in range(N)]
A=list(map(int,input().split()))
A.sort()
if A[0]+A[3] == A[1]+A[2]:
	print('Yes')
elif A[0]+A[1]+A[2] == A[3]:
	print('Yes')
else:
	print('No')
