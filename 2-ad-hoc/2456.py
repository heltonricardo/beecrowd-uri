e = [int(x) for x in input().split()]
c = sorted(e)
d = c[::-1]
print('C' if e==c else 'D' if e==d else 'N')
