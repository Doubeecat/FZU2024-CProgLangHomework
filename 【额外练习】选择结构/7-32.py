x = int(input())

if x < 1 or x > 13:
    print("NO")
    exit(0)

crd = ("J","Q","K")

if x <= 10:
    print(x)
else:
    print(crd[x - 11])