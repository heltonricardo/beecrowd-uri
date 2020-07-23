q = int(input())
e = str(input()).split()
indq = 0
mini = int(e[0])
for i in range(1, len(e)):
    if int(e[i]) > mini:
        mini = int(e[i])
    elif int(e[i]) < mini:
        indq = i + 1
        break
print(indq)
