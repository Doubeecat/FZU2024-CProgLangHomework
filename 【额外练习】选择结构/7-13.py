a = input().split()
n = len(a)
A = [0] * n
for i in range(n):
    A[i] = int(a[i])
print(max(A))
