k = int(input())
a, b = map(int, input().split())

ans = True
for i in range(a, b+1):
    if i % k == 0:
        print('OK')
        ans = False
        break

if ans:
    print('NG')
