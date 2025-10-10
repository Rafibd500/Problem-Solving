t = int(input())
while t:
    n, k = map(int, input().split())
    s = input()
    c1 = 0; c0 = 0
    for ch in s:
        if(ch == '0'): c0+=1
        else: c1+=1
    diff = abs(c1-c0)
    # print(c0, c1, diff)
    if((diff//2)%2):
        if(k>=max(c0, c1) - n//2 and k<=n and k%2 == 1) :  print("YES")
        else: print("NO")
    else:
        if(k>=max(c0, c1) - n//2 and k<=n and k%2 == 0): print("YES")
        else : print("NO")
    t-=1