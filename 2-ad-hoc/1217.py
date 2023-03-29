n = int(input())
sv = sq = 0
for i in range(n):
    sv += float(input())
    q = len(str(input()).split())
    sq += q
    print('day {}: {} kg'.format(i + 1, q))
print('{:.2f} kg by day'.format(float(sq / n)))
print('R$ {:.2f} by day'.format(float(sv / n)))
