n, s, d = map(int, input().split())
attack = False
for i in range(n):
	x, y = map(int, input().split())
	if x < s and y > d:
		attack = True

if attack:
	print("Yes")
else:
    print("No")
		