e = str(input())
s = 0
q = 0
while len(e) > 0:
    if e[-1] != '0':
        s += int(e[-1])
        e = e[:len(e)-1]
    else:
        s += 10
        e = e[:len(e)-2]
    q += 1
print('{:.2f}'.format(s / q))
