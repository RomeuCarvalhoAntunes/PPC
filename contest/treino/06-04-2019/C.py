aaa = str(input())
s = str(input())

n, q = aaa.split()

s = list(s)

a = int(q)

for i in range(len(s)):
    if s[i] == 'B':
        try:
            s[i], s[i+q] = s[i+q], s[i]
        except:
            s[i], s[0] = s[0], s[i]

print(''.join(s))