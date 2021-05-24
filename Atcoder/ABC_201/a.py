ls = list(map(int, input().split()))
ls.sort()
if ls[2]-ls[1] == ls[1]-ls[0]:
    print("Yes")
else:
    print("No")