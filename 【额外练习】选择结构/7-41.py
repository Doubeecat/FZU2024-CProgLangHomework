import math
x = int(input())

if x == 0:
    print("Even special number")
    exit(0)

if x % 2 == 0:
    flag = 0
    for i in range(0,x):
        if i*i == x:
            flag = 1
    if flag == 1:
        #exit(1)
        print("Even special number")
    else:
        print("No")
else:
    flag = 0
    for i in range(1,x):
        if i*i == x:
            flag = 1
    if flag == 1:
        #exit(1)
        print("Odd special number")
    else:
        print("No")