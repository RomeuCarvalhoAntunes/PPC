s = str(input())
 
upper_counter = 0
lower_counter = 0
 
for each in s:
    orde = ord(each)
    if orde >= 97 and orde <= 122:
        lower_counter+=1
    else:
        upper_counter+=1
 
if lower_counter < upper_counter:
    print(s.upper())
else:
    print(s.lower())