x = input()

if x.isupper():
    print(chr(ord('A') + (ord(x) - ord('A') + 3) % 26))
elif x.islower():
    print(chr(ord('a') + (ord(x) - ord('a') + 3) % 26))
else:
    print(x)