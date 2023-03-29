import re

while True:
    try:
        a = str(input())
        b = str(input())
        c = str(input())
    except EOFError: break
    src_str  = re.compile(a, re.IGNORECASE)
    str_replaced  = src_str.sub(b, c)
    print(str_replaced)
