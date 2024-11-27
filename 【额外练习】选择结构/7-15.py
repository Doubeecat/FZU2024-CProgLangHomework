k,a,b,c = [int(x) for x in input().split()]
ans = int(0)
if k == 0:
    ans = a + b
elif k == 1:
    ans = a-b
elif k == 2:
    ans = a*b
elif k == 3:
    if b>0:
        ans = a//b
    else:
        ans = 0
elif k == 4:
    if b>0:
        ans = a%b
    else:
        ans = 0
elif k == 5:
    if a != 0:
        ans = b
    else:
        ans = c
elif k == 6:
    ans = a>b
elif k == 7:
    ans = a<b
elif k == 8:
    ans = a!=b
else:
    ans = a == b

print(int(ans))