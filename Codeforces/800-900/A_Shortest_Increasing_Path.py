t = int(input())
while t:
    x, y = map(int, input().split())
    if(x<y): print(2)
    elif((x >= y and x-y < 2) or y==1): print(-1)
    else: print(3)
    t-=1
