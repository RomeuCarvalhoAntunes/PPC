def get_s(s):
    h = int(s[:2]) * 3600
    m = int(s[3:5]) * 60
    s = int(s[6:])
    return h+m+s
 
def to_hour(i):
    h = i // 3600
    i -= h*3600
    
    m = i // 60
    i-= m*60
 
    s = i
    return "{:02}:{:02}:{:02}".format(h, m, s)
 
def fix_time(i):
    if i < 0:
        return i + 24*3600
 
    return i
 
s = str(input()).split()
 
to_find = None
 
for i, each in enumerate(s):
    if each == '-':
        to_find = i
 
ans = 0
 
if to_find == 0:
    # Achar inicio
    dur = get_s(s[2])
    fim = get_s(s[1])
 
    if dur > fim:
        ans += 24*3600
 
    ans += fim - dur
    ans = fix_time(ans)
    print("Inicio: {0}".format(to_hour(ans)))
elif to_find == 1:
    # Achar fim
    inicio = get_s(s[0])
    dur = get_s(s[2])
 
    ans = inicio + dur
 
    if ans > 24*3600:
        ans -= 24*3600
    ans = fix_time(ans)
    print("Fim: {0}".format(to_hour(ans)))
else:
    # achar duracao
    inicio = get_s(s[0])
    fim = get_s(s[1])
 
    if fim < inicio:
        ans += 24*3600
 
    ans = fim - inicio
    ans = fix_time(ans)
    print("Duracao: {0}".format(to_hour(ans)))