n = int(input())
d = {}
do = {}
for i in range(n):
    inp = list(input().split())
    inp[0] = int(inp[0])
    if inp[1] in d:
        d[inp[1]] += inp[0]
        do[inp[1]].append(inp[0])
    else:
        d[inp[1]] = inp[0]
        do[inp[1]] = [inp[0]]
 
print(str(len(d)) + ' categoria(s)')
for key in d:
    print(str(key) + ' Total: ' + str(d[key]))
    print(' '.join(map(str, do[key])))