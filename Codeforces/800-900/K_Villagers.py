t = int(input())
while(t):
    n = int(input())
    v = list(map(int, input().split()))
    v.sort()
    sum = 0
    # print(v)
    if(n%2): sum+=v[0]
    for i in range(n-1, 0, -2):
        sum+=v[i]
    print(sum)
    t-=1