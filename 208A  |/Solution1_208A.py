l=input()
l=l.replace("WUB"," ")
m=list(map(str,l.split(" ")))
for _ in m:
    if _ =='':
        m.remove(_)

result=' '.join(m)
print(result)
