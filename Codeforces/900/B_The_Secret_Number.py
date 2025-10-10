t = int(input())
while(t):
    n = int(input())
    p1 = 10
    p2 = 11
    lst = []
    while(p2<=n):
        if(n%p2 == 0):
            x = n//p2
            lst.append(x)
        p2 = p1*10+1
        p1*=10
    lst.sort()
    print(len(lst))
    if(len(lst) != 0): 
        print(*lst)
    
    t-=1