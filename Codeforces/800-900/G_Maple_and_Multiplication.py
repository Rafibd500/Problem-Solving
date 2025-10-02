t = int(input())
while t:
    a, b = map(int, input().split())
    if a==b: print(0)
    elif a%b == 0 or b%a == 0: print(1)
    elif a%b: print(2)
    t-=1
