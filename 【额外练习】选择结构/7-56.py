a,b = [int(x) for x in input().split()]

if a> 0:
    print(a,end = "")
    if b > 0:
        print("+",end = "")
if b > 0:
    if (b > 1):
        print(b,end = "")
    print("i",end = "")
else:
    if a == 0:
        print(0)
