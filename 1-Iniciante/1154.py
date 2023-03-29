q = 0
s = 0
while True:
    n = int(input())
    if n < 0: break
    s += n
    q += 1
print('{:.2f}'.format(s / q))
