x = int(input())

ans = 0

if x > 800:
    if x <= 4000:
        ans = (x - 800) * 0.15
    else:
        ans =  x * 0.1

print("%.1f"%ans) 