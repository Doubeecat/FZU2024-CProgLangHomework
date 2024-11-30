import sys
import math

h = 0
t = 0

flag = 0

for c in sys.stdin:
    for x in c:
        if (x.isdigit() == False):
            flag = 1
        else:
            if flag == False:
                h = h * 10 + int(x)
            else:
                t = t * 10 + int(x)


#print(h,t)

if h >= 12:
    h -= 12

deg1 = h / 12 * 360 + (t / 60 * 30)
deg2 = t / 60 * 360

#print(deg1,deg2)

print("%.3f"%min(360-abs(deg1 - deg2),abs(deg1 - deg2)))