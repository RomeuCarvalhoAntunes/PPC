n = int(input())
e = input()
m = {}
for c in e:
    ch = c
    if c.isupper():
        ch = c.lower()
    m[c] = True
n = int(input())
for i in range(n):
    print('Mensagem #' + str(i + 1) + ': ', end='')
    s = input()
    uniq = True
    for c in s:
        if c.lower() in m and m[c.lower()]:
            uniq = False
            break
    if uniq:
        print('Beto ou Carlos')
    else:
        print('Carlos')