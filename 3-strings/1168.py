led = {'0': 6, '1': 2, '2': 5, '3': 5, '4': 4,
       '5': 5, '6': 6, '7': 3, '8': 7, '9': 6}
for g in range(int(input())):
    n = input()
    s = 0
    for i in n: s += led[i]
    print(s, 'leds')
