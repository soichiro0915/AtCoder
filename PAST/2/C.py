n = int(input())
s = []
for _ in range(n):
    row = list(input())
    s.append(row)

for i in range(n-2, -1, -1):
    for j in range(1, 2*n-1):
        if s[i][j] == '#':
            if s[i+1][j-1] == 'X':
                s[i][j] = 'X'
            if s[i+1][j] == 'X':
                s[i][j] = 'X'
            if s[i+1][j+1] == 'X':
                s[i][j] = 'X'

for i in range(n):
    s[i] = ''.join(s[i])
    print(s[i])