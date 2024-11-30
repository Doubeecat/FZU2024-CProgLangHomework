a,b,c = [int(x) for x in input().split()]

ans1 = abs(a-b)
ans2 = abs(a-c)

if ans1 < ans2:
    print("Andy")
elif ans1 > ans2:
    print("Ban")
else:
    if b < c:
        print("Andy")
    elif b > c:
        print("Ban")
    else:
        print("Peace")