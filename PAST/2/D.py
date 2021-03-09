def is_match(t, s):
    for i in range(len(s) - len(t) + 1):
        ok = True
        for j in range(len(t)):
            if s[i+j] != t[j] and t[j] != '.':
                ok = False
        
        if ok:
            return True
    return False

s = input()

C = "abcdefghijklmnopqrstuvwxyz."
m = []
for t in C:
    if is_match(t, s):
        m.append(t)

for c1 in C:
    for c2 in C:
        t = c1 + c2
        if is_match(t, s):
            m.append(t)

for c1 in C:
    for c2 in C:
        for c3 in C:
            t = c1 + c2 + c3
            if is_match(t, s):
                m.append(t)

print(len(m))