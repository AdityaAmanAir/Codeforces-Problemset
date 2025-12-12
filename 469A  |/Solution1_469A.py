n=int(input())
x= list(map(int,input().split()))
y =list(map(int,input().split()))
x[0]=0
y[0]=0
m=x+y
dd=set(m)
sig=True
for i in range(1,n+1):
    if( i not in dd):
        print("Oh, my keyboard!")
        sig=False
        break
if sig==True:
    print("I become the guy.")