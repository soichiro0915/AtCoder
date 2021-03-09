n = int(input())
A = list(map(int, input().split()))
sum = 0
for i in range(0, n):
    sum += A[i] * A[i]

    for j in range(i+1, n):
        sum -= A[i] * A[j]


print(2 * sum)