def co(e):
    q = 0
    if e[0] == 'o': q += 1
    if e[1] == 'n': q += 1
    if e[2] == 'e': q += 1
    return q

for g in range(int(input())):
    e = str(input())
    if len(e) == 5: print(3)
    else:
        if co(e) > 1: print(1)
        else: print(2)
