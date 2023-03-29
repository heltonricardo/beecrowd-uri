c = int(input())
l = int(input())

m = []
for i in range(l):
    m.append([e for e in input()])
t = False
i = j = 0
a = '!'
while True:
    if m[i][j] == '.': m[i][j] = a
    if m[i][j] == '*':
        t = True
        break
    elif m[i][j] == '!': break
    elif m[i][j] == '>':
        if j < c-1:
            a = '>'
            m[i][j] = '!'
            j += 1
        else: break
    elif m[i][j] == '<':
        if 0 < j:
            a = '<'
            m[i][j] = '!'
            j -= 1
        else: break
    elif m[i][j] == '^':
        if 0 < i:
            a = '^'
            m[i][j] = '!'
            i -= 1
        else: break
    elif m[i][j] == 'v':
        if i < l-1:
            a = 'v'
            m[i][j] = '!'
            i += 1
        else: break
print(m[i][j])
