n, a, b = map(int, input().split())

ans = 0
for i in range(1, n+1):
	sum = 0
	num = i
	bool = True
	while bool:
		sum += num % 10
		num -= num % 10
		num /= 10
		if num == 0:
			bool = False 
	
	if a <= sum <= b:
		ans += i

print(ans)	
