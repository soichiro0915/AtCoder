"""
import math

n = int(input())

keta = math.ceil(n / 9)
num = n % 9

if num== 0:
    num = 9

ans = ''
for _ in range(keta):
    ans += str(num)

print(ans)
"""

n = int(input())
count = 0
for i in range(1, 555555 + 1):
    moji = str(i)

    ok = True
    for m in moji:
        if m != moji[0]:
            ok = False
    
    if ok:
        count += 1
    
    if ok and count == n:
        ans = i
        break

print(ans)