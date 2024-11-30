import math
x = int(input())

if x % 2 == 0:
    print("Even special number")
elif x == math.sqrt(x)**2:
    print("Odd special number")
else:
    print("No")