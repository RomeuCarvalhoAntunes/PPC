s = str(input())

counter = 0

for each in s:
    if each == '4' or each == '7':
        counter+=1

valid = True

for each in str(counter):
    if(each != '4' and each != '7'):
        valid = False

if valid:
    print('YES')
else:
    print('NO')