L,R,d=map(int,input().split())
# 整数の切り捨て除算は//演算子です
ans = R // d - (L + d - 1) // d + 1
print(ans)
