t = int(input())
while t:
    n, m = map(int, input().split())
    v = []
    v = list(map(int, input().split()))
    # print(v)
    v.sort(); v.reverse()
    sum = 0
    n = min(n,m)
    for i in range (0, n):
        sum += (m-i)*v[i]
    print(sum)
    t-=1