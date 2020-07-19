a, b, c = [int(x) for x in input().split()]

if a > b <= c: h = 'f'
elif a < b >= c: h = 't'
elif a < b < c and abs(c - b) <  abs(b - a): h = 't'
elif a < b < c and abs(c - b) >= abs(b - a): h = 'f'
elif a > b > c and abs(c - b) <  abs(b - a): h = 'f'
elif a > b > c and abs(c - b) >= abs(b - a): h = 't'
if a == b:
    if b < c: h = 'f'
    else: h = 't'
print(':)' if h == 'f' else ':(')
