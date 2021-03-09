s = input()

a = s.count('a')
b = s.count('b')
c = s.count("c")

mx = max(a, b, c)
if mx == a:
	print('a')
elif mx == b:
	print('b')
else:
	print('c')
