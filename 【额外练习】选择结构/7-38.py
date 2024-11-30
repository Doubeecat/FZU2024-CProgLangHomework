x = int(input())

if x < 0 or x > 100:
    print("Score is error!")
    exit(0)

if x < 60:
    print("E")
elif x < 70:
    print("D")
elif x < 80:
    print("C")
elif x < 90:
    print("B")
else:
    print("A")