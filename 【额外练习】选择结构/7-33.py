numbers = [int(x) for x in input().split()]

numbers.sort()

for x in range(len(numbers) - 1):
    print(numbers[x],end = " ")
print(numbers[len(numbers)-1])