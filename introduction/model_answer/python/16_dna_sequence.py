N,S=input().split()
N=int(N)
sumA,sumT,sumC,sumG=([0]*(N+1) for _ in range(4))
for i in range(N):
	sumA[i+1],sumT[i+1],sumC[i+1],sumG[i+1]=sumA[i],sumT[i],sumC[i],sumG[i]
	if S[i] == 'A':
		sumA[i+1] += 1
	elif S[i] == 'T':
		sumT[i+1] += 1
	elif S[i] == 'C':
		sumC[i+1] += 1
	elif S[i] == 'G':
		sumG[i+1] += 1

ans=0
for j in range(1,N+1):
	for i in range(j):
		A = sumA[j] - sumA[i]
		T = sumT[j] - sumT[i]
		C = sumC[j] - sumC[i]
		G = sumG[j] - sumG[i]
		if A == T and C == G:
			ans += 1
print(ans)
