def is_different(y):
    s = set()

    for each in str(y):
        s.add(each)

    return len(s) == len(str(y))

year = int(input())

while True:
    year+=1
    if is_different(year):
        break

print(year)

