n=int(input())
l=list(map(int,input().split()))
i=min(l)
x=max(l)
ix=l.index(x)
nl=l[-1::-1]
ii=nl.index(i)
print(ii+ix + (-1 if ((n-ii)<=ix) else 0))