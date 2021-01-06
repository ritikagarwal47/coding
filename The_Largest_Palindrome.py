import math
n = input()
s = n 
#print(s)
s = list(s)
n = int(n)
a = math.log10(n)
if(a.is_integer()):
    h = 1
    h = int(h)
    print(n-1,end=' ')
    print("1")
else:
    i=0
    j=len(s)-1
    while(i<j):
        if(s[i]>s[j]):
            s[i] = s[j]
        else:
            s[j] = s[i]
        i+=1
        j-=1
    s = ''.join(s)
    sp  = int(s)
    print(s,end=' ')
    print((n - sp))
    