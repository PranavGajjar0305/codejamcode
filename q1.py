import numpy as np
test=int(input())
for i in range(1,test+1):
    n=int(input())
    d=[]
    A=[]
    m=0
    row=0
    column=0
    for j in range(n):
        l=list(map(int,input().split()))
        d.append(l)
    A=np.array(d)
    Atemp=A.transpose()
    for j in range(n):
        m=m+A[j][j]
    for j in range(n):
        b=set(Atemp[j])
        if(len(b)!=len(A[j])):
            column=column+1
        else: continue

    for j in range(n):
        b=set(A[j])
        if(len(b)!=len(A[j])):
            row=row+1
        else: continue
    
    print("Case #{}: {} {} {}".format(i,m,row,column))