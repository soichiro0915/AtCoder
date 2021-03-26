n, q = map(int, input().split())

graph = []
for i in range(n):
    row = []
    for j in range(n):
        row.append(False)
    graph.append(row)

for i in range(q):
    query = list(map(int, input().split()))
    a = query[1] - 1
    if query[0] == 1:
        b  = query[2] - 1
        graph[a][b] = True
    
    if query[0] == 2:
        for j in range(n):
            if graph[j][a]:
                graph[a][j] = True
    
    if query[0] == 3:
        to_follow = []
        for j in range(n):
            if graph[a][j]:
                for k in range(n):
                    if graph[j][k] and k != a:
                        to_follow.append(k)
        
        for j in to_follow:
            graph[a][j] = True

for i in range(n):
    for j in range(n):
        if graph[i][j]:
            print('Y', end='')
        else:
            print('N', end='')
    print()
