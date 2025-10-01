t = int(input())
while t:
    s = input()
    list = [-1] *10
    dict = {}
    pos = 0
    rest = []
    for ch in s:
        a = int(ch)
        if(a not in dict): dict[a] = 1
        else: dict[a]+=1
    for key, val in dict.items():
        for i in range (0, val):
            rest.append(key)
    
    n = len(rest)
    rest.sort()
    for i in range (0, n):
        for j in range (9, -1, -1):
            if(list[j] == -1 and rest[i] >= j):
                list[j] = rest[i]
                rest[i] = -1000 
                break
    list.reverse()
    for ch in list:
        print(ch, end = "")
    print("\n", end = "")
    t-=1

