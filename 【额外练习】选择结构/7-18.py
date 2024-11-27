import math

a,b,c = [int(x) for x in input().split()]

if (max(a,b,c) >= (a+b+c-max(a,b,c))):
    print("no triangle")
    exit(0)

p = (a+b+c)/2.0

s = math.sqrt(p * (p-a) * (p-b) * (p-c))

print('%.2f'%s,'%.2f'%float(a+b+c))
