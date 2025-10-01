t = int(input())
while t:
    s = input()
    list = [-1] *10
    dict = {}
    pos = 0
    for ch in s:
        if(int(ch) in dict): dict[int(ch)]+=1
        else: dict[int(ch)] = 1
    for key, val in dict.items():
        list[key] = key
        dict[key]-=1
    for key, val in dict.items():
        for i in range(0, val):
            for j in range(0, 10):
                if list[j] == -1:
                    list[j] = key
                    dict[key] -= 1
                    break

    # print(dict)
    list.reverse()
    for ch in list:
        print(ch, end = "")
    print("\n", end = "")
    t-=1

