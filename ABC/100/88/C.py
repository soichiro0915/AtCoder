c = []
for _ in range(3):
    row = list(map(int, input().split()))
    c.append(row)

count = 0
for i in range(2):
    if c[i][0]-c[i+1][0] == c[i][1]-c[i+1][1] and c[i][1]-c[i+1][1] == c[i][2]-c[i+1][2]:
        count += 1

    if c[0][i]-c[0][i+1] == c[1][i]-c[1][i+1] and c[1][i]-c[1][i+1] == c[2][i]-c[2][i+1]:
        count += 1

if count == 4:
    print('Yes')
else:
    print('No')