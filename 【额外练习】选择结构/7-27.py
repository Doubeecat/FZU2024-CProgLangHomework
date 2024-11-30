x = input()

flag = 0

for i in range(0,2):
    if x[i] != x[6-i]:
        flag = 1

if flag:
    print("No")
else:
    print("Yes")