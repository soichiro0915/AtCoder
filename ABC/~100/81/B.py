n = int(input())
a = input().split()

min_count = 100000000
for i in range(n):
	count = 0
	b = int(a[i])
	while b % 2 == 0:
		b /= 2
		count += 1
		if min_count < count:
			break
	
	if min_count > count:
		min_count = count 

print(min_count)
