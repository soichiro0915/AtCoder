"""
n, m, q = map(int, input().split())
graph = []
for i in range(n):
    row = []
    for j in range(n):
        row.append(False)
    graph.append(row)

for i in range(m):
    u, v = map(int, input().split())
    u -= 1
    v -= 1
    graph[u][v] = True
    graph[v][u] = True

c = list(map(int, input().split()))

for i in range(q):
    query = list(map(int, input().split()))

    if query[0] == 1:
        x = query[1]
        x -= 1
        print(c[x])

        for i in range(n):
            if graph[x][i]:
                c[i] = c[x]
    
    if query[0] == 2:
        x = query[1]
        y = query[2]
        x -= 1
        print(c[x])
        c[x] = y
"""

n, m, q = map(int, input().split())
graph = []
for i in range(n):
    row = []
    graph.append(row)

for i in range(m):
    u, v = map(int, input().split())
    u -= 1
    v -= 1
    graph[u].append(v)
    graph[v].append(u)

c = list(map(int, input().split()))

for i in range(q):
    query = list(map(int, input().split()))

    if query[0] == 1:
        x = query[1]
        x -= 1
        print(c[x])

        for i in graph[x]:
            c[i] = c[x]
    
    if query[0] == 2:
        x = query[1]
        y = query[2]
        x -= 1
        print(c[x])
        c[x] = y