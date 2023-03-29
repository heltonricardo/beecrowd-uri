e = str(input())
nb1 = e.count('1')
print(e, end='')
if nb1 % 2 == 0:
    print(0)
else:
    print(1)
