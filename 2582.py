t = ('PROXYCITY', 'P.Y.N.G.', 'DNSUEY!', 'SERVERS', 'HOST!', 'CRIPTONIZE', 'OFFLINE DAY', 'SALT', 'ANSWER!', 'RAR?', 'WIFI ANTENNAS')
n = int(input())
for i in range(n):
    e = str(input()).split()
    print(t[int(e[0]) + int(e[1])])
