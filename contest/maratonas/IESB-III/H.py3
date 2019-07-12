s = input()
ans = str(s[0])
cnt = 1
 
while len(ans) < len(s):
    sz = len(ans)
    for i in range(sz, 0, -1):
        if s[len(ans):len(ans) + i] in ans:
            cnt += 1
            ans = ans + s[len(ans):len(ans) + i]
            break
    else:
        ans = ans + s[len(ans)]
        cnt += 1
print(cnt)