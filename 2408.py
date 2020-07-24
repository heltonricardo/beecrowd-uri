a = [int(x) for x in input().split()]
a.remove(max(a))
a.remove(min(a))
print(a[0])
