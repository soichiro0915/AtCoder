a = []
for _ in range(3):
    row = list(map(int, input().split()))
    a.append(row)

m = []
for i in  range(3):
    row = []
    for j in range(3):
        row.append(False)
    m.append(row)

n = int(input())
for _ in range(n):
    b = int(input())

    for i in range(3):
        for j in range(3):
            if a[i][j] == b:
                m[i][j] = True

bingo = False

for i in range(3):
    if m[i][0] and m[i][1] and m[i][2]:
        bingo = True

    if m[0][i] and m[1][i] and m[2][i]:
        bingo = True

if m[0][0] and m[1][1] and m[2][2]:
    bingo = True

if m[0][2] and m[1][1] and m[2][0]:
    bingo = True

if bingo:
    print('Yes')
else: 
    print('No')
