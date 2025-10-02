def ok(median):
    cnt = 0
    for i in range (middle, n): 
        if(v[i]<median): cnt+=median-v[i]
    return cnt<=m

n, m = map(int, input().split())
v = list(map(int, input().split()))
middle = n//2
v.sort()
l = v[middle]+1; r = v[middle]+m; mid=0; ans=v[middle]

while(l<=r):
    mid = (l+r+1)//2
    if(ok(mid)):
        ans = mid
        l = mid+1
    else:
        r = mid-1
print(ans)