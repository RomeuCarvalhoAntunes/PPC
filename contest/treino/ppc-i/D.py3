s = str(input())
 
ans = ''
 
i = 0
 
while i<len(s):
    if s[i] != '.':
        try:
            if s[i+1] == '.':
                ans+='1'
                i+=2
                continue
            else:
                ans+='2'
                i+=2
                continue
        except:
            pass
    else:
        ans += '0'
 
    i+=1
 
print(ans)