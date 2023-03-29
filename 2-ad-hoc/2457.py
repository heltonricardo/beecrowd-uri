c = input().strip()
fr = input().split()
n = 0
for i in fr:
   if c in i: n += 1
print('{:.1f}'.format(n*100/len(fr)))
