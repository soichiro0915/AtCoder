t = int(input())

for i in range(t):
    l, r = map(int, input().split())
    count = 0
    for j in range(r, (r+l+1)//2 - 1, -1):
        count += j - l -1 
        
    print(count)