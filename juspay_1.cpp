def fuckit_up(d2c,suutta,energy,laptu,c2,t2,lada,faltu,g,chall):
    if lada//t2>chall: 
        g=not g 
        chall+=1 
    if suutta==energy: 
        faltu.append(lada) 
        return 
    for i in d2c[suutta]: 
        if str(i) not in laptu[:-1].split(): 
            if g: 
                fuckit_up(d2c,i,energy,laptu+str(i)+" ",c2,t2,lada+c2,faltu,g,chall) 
            else:
                aq2=lada%t2 
                fuckit_up(d2c,i,energy,laptu+str(i)+" ",c2,t2,lada+c2+t2-aq2,faltu,not g,chall)
    return
 
n2,m2,t2,c2=map(int,input().split())
d2c={}
for i in range(m2):
    u2,v2=map(int,input().split()) 
    if u2 in d2c: 
        d2c[u2].append(v2) 
    else:
        d2c[u2]=[v2] 
    if v2 in d2c: 
        d2c[v2].append(u2) 
    else:
        d2c[v2]=[u2] 
laptu="1 "
faltu=[]
g=True
chall=0
ret2=fuckit_up(d2c,1,n2,laptu,c2,t2,0,faltu,g,chall)
faltu=set(faltu)
faltu=list(faltu)
faltu.sort()
if len(faltu)>1:
    print(faltu[1]) 
else:
    print(-1)