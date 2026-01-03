#This solution will Give me TLA if the TLA limit is half
times=int(input())
lt=[]
ans=[]
for _ in range(times):
    l=input()
    lt.append(l)
for item in range(times):
    count=0
    i=item-1
    while(i>=0):
        
        if lt[item]==lt[i]:
            count+=1
        i-=1    
    if(count>0):
        ans.append(lt[item]+str(count))
    else:
        ans.append("OK")     

for _ in (ans):
    print(_)       
        
