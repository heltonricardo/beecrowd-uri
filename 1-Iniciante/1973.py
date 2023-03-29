t = int(input()) - 1
v = [int(x) for x in input().split()]
s = sum(v)
i = r = 0
a = [0 for x in range(t+1)]
while 0 <= i <= t:
    par = True if v[i] % 2 == 0 else False
    a[i] = 1
    if v[i] > 0:
        r += 1
        v[i] -= 1
    i = i-1 if par else i+1
print(a.count(1), s - r)
