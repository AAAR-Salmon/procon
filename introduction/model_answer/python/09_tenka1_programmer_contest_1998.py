# 空の固定長配列はNoneを入れておくと高速に生成できます
a=[None] * 20
a[0]=a[1]=100
a[2]=200
for i in range(3,20):
	a[i] = a[i-1] + a[i-2] + a[i-3]
print(a[19])
