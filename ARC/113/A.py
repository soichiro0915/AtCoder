def divisor(n): 
    i = 1
    table = []
    while i * i <= n:
        if n%i == 0:
            table.append(i)
            table.append(n//i)
        i += 1
    table = list(set(table))
    return table

k = int(input())

yakusu = divisor(k)
print(yakusu)
count = 0
for i in range(len(yakusu)):
    for j in range(1, k // yakusu[i]+1):
        count += (k // yakusu[i]) // j
        print(yakusu[i])
        print(j)

                

print(count)