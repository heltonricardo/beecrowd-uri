q = int(input())
e = str(input()).split()
sd = 1
rel = int(e[0]) - int(e[1])
if rel == 0:
    sd = 0
    q = 0
elif rel > 0:
    f = 'v'
else: f = 'm'

for i in range(2, q):
    rel = int(e[i - 1]) - int(e[i])
    if rel == 0:
        sd = 0
        break
    elif rel > 0:
        f2 = 'v'
    else: f2 = 'm'
    
    if f == f2:
        sd = 0
        break
    else:
        f = f2
print(sd)
