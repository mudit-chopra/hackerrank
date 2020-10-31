t=int(input())
for _ in range(t):
    n,m=[int(x) for x in input().split()]
    f_list=[int(x) for x in input().split()]
    p_list=[int(x) for x in input().split()]
    count={}
    for i in range(n):
        if f_list[i] in count:
            count[f_list[i]]+=p_list[i]
        else:count[f_list[i]]=p_list[i]

    print(min(count.values()))
