N=int(input())
P={}
i=2
while i ** 2 <= N:
	if N % i == 0:
		P[i]=0
		while N % i == 0:
			P[i] += 1
			N //= i
	i += 1
if N != 1:
	P[N]=1

ans=0
for e in P.values():
	i=1
	while i <= e:
		e -= i
		ans += 1
		i += 1
print(ans)
