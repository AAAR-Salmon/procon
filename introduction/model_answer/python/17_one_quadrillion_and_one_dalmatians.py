N=int(input())
L=0
X=1
while N-X >= 0:
	N -= X
	L += 1
	X *= 26
ans=''
for i in range(L):
	# ord,chrはUnicodeのデコード、エンコードをします
	ans += chr(ord('a') + N % 26)
	N //= 26
# 文字列が格納されたシーケンスを結合して出力します
print(''.join(reversed(ans)))
