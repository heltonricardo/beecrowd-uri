n = int(input())
r = b = 0
li = []
for i in range(n):
    e = str(input()).split()
    if e[0] == '+': b += 1
    else: r += 1
    li.append(e[1])
new = sorted(li)
for j in new:
    print(j)
print('Se comportaram: {} | Nao se comportaram: {}'.format(b, r))
