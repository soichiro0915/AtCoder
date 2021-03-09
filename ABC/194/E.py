n, m = map(int, input().split())
A = list(map(int, input().split()))

mex = []
for i in range(n-m+1):
    sub = []
    r = list(range(0, m))
    for j in range(i, i+m):
        sub.append(A[j])
        if A[j] in r:
            r.remove(A[j])
    if len(r) == 0:
        mex.append(max(sub)+1)
    else:
        mex.append(r[0])

print(min(mex))