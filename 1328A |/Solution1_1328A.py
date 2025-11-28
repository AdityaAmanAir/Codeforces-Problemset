n=int(input())

while n>0:
    n-=1
    a,b=map(int,input().split())
    a=a%b
    print(b-a if a!=0 else 0 )
