import math
t = int(input())
while t:
    a,b,c = map(int, input().split())
    # print(a, b, c)
    dx = a//math.gcd(a, b)
    dy = b//math.gcd(a, b)
    if(max(dx, dy) <= c): print(1)
    else: print(2)
    t-=1