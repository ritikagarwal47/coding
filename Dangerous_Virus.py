N,Y,X = [int(x) for x in input().split()]
l=[]
a=[]
c=1
p=1
l.append(0)
a.append(0)
for _ in range(1,Y):
    l.append(c) 
    a.append(p)
    c+= c*X
    p=p*X
for _ in range(Y,1000):
    l.append(c)
    a.append(p)
    c+= c*X - a[_ - Y + 1]
    p=p*X
    
#for i in l:print(i)

for _ in range(N):
    q = int(input())
    print(l[q])