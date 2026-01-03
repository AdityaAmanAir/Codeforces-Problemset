n,m=map(int,input().split())
for _ in range(1,n+1):
    if (_%2!=0):
        print("#"*m)
    elif (_%4==0) :
        print("#","."*(m-1),sep="")   
    else:
        print("."*(m-1),"#",sep="")   