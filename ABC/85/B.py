n = int(input())
d = []
for i in range(n):
    d.append(int(input()))

for i in range(n):
    for j in range(n-i-1):
        if d[j] < d[j+1]:
            x = d[j]
            y = d[j+1]
            d[j] = y
            d[j+1] = x

num = 0
count = 0
for i in range(n):
    if num != d[i]:
        count += 1
        num = d[i]

print(count)
      