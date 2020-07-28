l = ['Dasher', 'Dancer', 'Prancer', 'Vixen', 'Comet', 'Cupid', 'Donner', 'Blitzen', 'Rudolph']
e = sum(int(x) for x in str(input()).split())
print(l[e % 9 - 1])
