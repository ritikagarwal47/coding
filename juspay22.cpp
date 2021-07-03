def kjcbas(dhd,asns,Net):
    maximummmm=99999999
    for ittu in range(Net+1):
        if dhd[ittu]<maximummmm and asns[ittu]==False:
            maximummmm=dhd[ittu]
            la_jabab = ittu
    return la_jabab

def keemat(gayy,setev,fagf,Net):
    dhd = [99999999 for _ in range(Net+1)]
    dhd[setev] = 0
    asns=[False for ittu in range(Net+1)]
    for ittu in range(Net+1):
        ututu = kjcbas(dhd,asns,Net)
        asns[ututu] = True
        for ittu in range(Net+1):
            if gayy[ututu][ittu] > 0 and asns[ittu] == False and dhd[ittu] > dhd[ututu] + gayy[ututu][ittu]:
                dhd[ittu]=dhd[ututu]+gayy[ututu][ittu]
    return dhd[fagf]

dhd = {}
Net = int(input())
adj = [[999999 for ittu in range(Net+1)] for j in range(Net+1)]
for ittu in range(Net):
    xml = int(input())
    dhd[xml]=ittu+1

cute = int(input())
for ittu in range(cute):
    xml, yahooo, who = map(int,input().split())
    xml = dhd[xml]
    yahooo = dhd[yahooo]
    adj[xml][yahooo] = who
chal = dhd[int(input())]
det = dhd[int(input())]

print(keemat(adj, chal, det, Net))