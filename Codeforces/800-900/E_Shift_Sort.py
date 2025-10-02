t = int(input())
while t:
    n = int(input())
    s = input()
    o_cnt = 0
    for ch in s:
        if(ch == '1'): o_cnt+=1
    ok = 0
    for i in range(n-1, n - o_cnt-1, -1):
        if(s[i] == '1'): ok +=1
    print(o_cnt - ok)
    t-=1