n = int(input())
if n % 2:
    if n % 3:
        print(n,end = "")
        print(" is an odd number,it can't be divided by 3")
    else:
        print(n,end = "")
        print(" is an odd number,it can be divided by 3")
else:
    print(n,end = "")
    print(" is an even number")