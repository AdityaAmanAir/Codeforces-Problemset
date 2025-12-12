nn=int(input())
for _ in range(nn):
    n=int(input())
    tt=list((map(int, input().split())))
    
    s3t = set(tt)
    tt2 = [x for x in tt if x not in s3t]
    print(tt2)
    s3t2=set(tt2)

    print(s3t, s3t2)