a = [int(x) for x in input().split()]

for i in range(3):
    for j in range(i,3):
        # print(i,j)
        if abs(a[i]) > abs(a[j]):
            a[i],a[j] = a[j],a[i]
        elif abs(a[i]) == abs(a[j]):
            if a[i] > a[j]:
                a[i],a[j] = a[j],a[i]

for x in range(len(a) - 1):
    print(a[x],end = " ")

print(a[len(a) - 1],end = "")