e1 = str(input()).split()
e2 = str(input()).split()
c = True
for i in range(5):
    if e1[i] == e2[i]:
        c = False
        break
print('Y' if c else 'N')
