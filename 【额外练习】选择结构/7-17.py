a = input()
b = str(a)
ans1 = 0
for x in b:
    ans1 += int(x) ** 3
if ans1 == int(a):
    print("yes")
else:
    print("no")