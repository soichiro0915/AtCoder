n, y = map(int, input().split())

bool = True
for i in range(n+1):
    if not bool:
        break
    for j in range(n - i + 1):
        if y == 10000*i + 5000*j + 1000*(n-i-j):
            print(str(i) + " " + str(j) + " " + str(n-i-j))
            bool = False
            break

if bool:
    print("-1 -1 -1")