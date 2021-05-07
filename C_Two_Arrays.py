import math
N,M = map(int,input().split())
ans = math.factorial(N + 2*M - 1)//(math.factorial(2*M)*math.factorial(N-1))
print(ans%(10**9 + 7 ))