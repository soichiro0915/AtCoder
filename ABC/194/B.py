n = int(input())

dict = {}
A = []
B = []
for i in range(n):
    a, b = map(int, input().split())
    dict[a] = b
    A.append(a)
    B.append(b)

A.sort()
B.sort()
if dict[A[0]] == B[0]:
    n = max(A[0], B[1])
    m = max(A[1], B[0])
    ans = min(n, m)
    if ans > A[0] + B[0]:
        ans = A[0] + B[0]
else:
    ans = max(A[0], B[0])

print(ans)

