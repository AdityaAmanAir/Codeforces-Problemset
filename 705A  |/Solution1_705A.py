n=int(input())
flag = True
while n>0:
    if(flag):
        print("I hate", end=" ")
        flag=False
        n-=1
    if(n==0):
        print("it")
        break
    else:
        print("that", end=" ")
    if(not flag):
        print("I love", end=" ")
        flag=True
        n-=1  
    if(n==0):
        print("it")
        break
    else:
        print("that", end=" ")
        