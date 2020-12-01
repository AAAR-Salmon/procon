s=input()
t=input()
ans=-1
for i in range(len(s)):
	if s[-i:] + s[:-i] == t:
		ans = i
		break
print(ans)
