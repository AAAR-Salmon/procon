N=int(input())
A=list(map(int,input().split()))
count_odds=0
for a in A:
	if a % 2 == 1:
		count_odds += 1
print('YES' if count_odds % 2 == 0 else 'NO')
