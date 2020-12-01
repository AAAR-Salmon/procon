S = input()
K = int(input())
s = [[S[0], 1]]
for c in S[1:]:
	if c == s[-1][0]:
		s[-1][1] += 1
	else:
		s.append([c, 1])

ans=0
if len(s) == 1:
	ans = len(S) * K // 2
else:
	for p in s:
		ans += p[1] // 2
	ans *= K
	if s[0][0] == s[-1][0]:
		ans += ((s[0][1] + s[-1][1]) // 2 - s[0][1] // 2 - s[-1][1] // 2) * (K - 1)
print(ans)
