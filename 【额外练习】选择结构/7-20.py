xl,yl,xr,yr,x,y = [int(x) for x in input().split()]

if x >= xl and x <= xr and y <= yl and y >= yr:
    print("Yes")
else:
    print("No")