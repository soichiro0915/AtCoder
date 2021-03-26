n = int(input())
c = list(map(int, input().split()))

sell = 0
q = int(input())
for _ in range(q):
    query = list(map(int, input().split()))

    if query[0] == 1:
        x = query[1] - 1
        a = query[2]
        if c[x] >= a:
            c[x] -= a
            sell += a
        
    elif query[0] == 2:
        a = query[1]
        ok = True
        for i in range(n):
            if i % 2 != 0:
                if c[i] < a:
                    ok = False
    
        if ok:
            for i in range(n):
                if i % 2 == 0:
                    c[i] -= a
                    sell += a
    
    elif query[0] == 3:
        a = query[1]
        ok = True
        for i in range(n):
            if c[i] < a:
                ok = False        
        if ok:
            for i in range(n):
                c[i] -= a
                sell += a

print(sell)

    
