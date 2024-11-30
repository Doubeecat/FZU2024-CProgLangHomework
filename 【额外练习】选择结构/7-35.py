a,b = [int(x) for x in input().split()]
c,d = [int(x) for x in input().split()]

if a+c> 0:
    print(a+c,end = "")
    if b+d > 0:
        print("+",end = "")
if b+d > 0:
    if (b+d > 1):
        print(b+d,end = "")
    print("i",end = "")
else:
    if a+c == 0:
        print(0)
