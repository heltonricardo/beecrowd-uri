e = str(input()).upper()
r = ''
for i in e:
    if i in 'AEIOU': r += i
t = len(r)
c = True
for i in range(t):
    if r[i] != r[t-i-1]:
        c = False
        break
print('S' if c else 'N')
