n=input()
mylist=list(map(int,input().split()))
mylist.sort()
for x in mylist:
    print(x, end=" ", sep="")
