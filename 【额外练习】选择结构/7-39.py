a,b = [int(x) for x in input().split()]
n,m = [int(x) for x in input().split()]

ans = 5 - (a == n) - (b == m)

print(ans)