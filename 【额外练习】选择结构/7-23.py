t = int(input())

eps = 1e-12

ans1 = 25 + 0.1 * t

ans2 = 0

if t < 100:
    ans2 = 20
else:
    ans2 = 0.3 * t

if ans1 - ans2 < eps:
    print(1)
else:
    print(2)