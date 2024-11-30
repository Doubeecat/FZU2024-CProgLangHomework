y,t = [int(x) for x in input().split()]

ans = 0

if y >= 5:
    ans = 50 * t
    if t > 40:
        ans += 75 * (t-40)
else:
    ans = 30 * t
    if t > 40:
        ans += 15 * (t - 40)

print("%.2f"%ans)