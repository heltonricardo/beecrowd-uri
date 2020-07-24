n, k = [int(x) for x in input().split()]
nm = []
for g in range(n): nm.append(input())
print(sorted(nm)[k-1])
