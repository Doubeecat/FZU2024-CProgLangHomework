import sys

x = ""

flag = 0

for c in sys.stdin:
    if (c.isdigit() == False):
        flag = 1

if flag:
    print("No")
else:
    print("Yes")