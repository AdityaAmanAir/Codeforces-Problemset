a=(input())
b=(input())

n=len(a)

for _ in range(0,n):
    print(int(a[_])^int(b[_]), end="")