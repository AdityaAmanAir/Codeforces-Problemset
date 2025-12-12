l=input()
noseet=[]
for _ in l:
    noseet.append(_)
seet=set(noseet)
l=len(seet)
if(l>3):
    print(l-4)   

elif(l==2):
    print(0)

else:
    print(1)
     