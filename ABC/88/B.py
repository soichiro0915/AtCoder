n = int(input())
a = input().split()
list = []
for i in range(n):
    list.append(int(a[i]))

for i in range(n):
    for j in range(n-i-1):
        if list[j] < list[j+1]:
            x = list[j]
            y = list[j+1]
            list[j] = y
            list[j+1] = x

ans = 0
for i in range(0, n):
    if i % 2 == 0:
        ans += list[i]
    else:
        ans -= list[i]

print(ans)