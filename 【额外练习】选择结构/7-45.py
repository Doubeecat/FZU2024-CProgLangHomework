import math

def solve_quadratic(a, b, c):
    D = b**2 - 4*a*c
    if D < 0:
        return "No answer"
    else:
        x1 = (-b + math.sqrt(D)) / (2*a)
        x2 = (-b - math.sqrt(D)) / (2*a)
        solutions = []
        if x1.is_integer():
            solutions.append(int(x1))
        if x2.is_integer():
            solutions.append(int(x2))
        if solutions:
            solutions.sort()
            return ' '.join(map(str, solutions))
        else:
            return "No answer"

# 读取输入
a, b, c = map(int, input().split())

# 调用函数并输出结果
print(solve_quadratic(a, b, c))


import math

def solve_quadratic(a, b, c):
    D = b**2 - 4*a*c
    if D < 0:
        return "No answer"
    else:
        x1 = (-b + math.sqrt(D)) / (2*a)
        x2 = (-b - math.sqrt(D)) / (2*a)
        solutions = []
        if x1.is_integer():
            solutions.append(int(x1))
        if x2.is_integer() and x2 != x1:  # 确保x2与x1不同
            solutions.append(int(x2))
        if solutions:
            return ' '.join(map(str, solutions))
        else:
            return "No answer"

# 读取输入
a, b, c = map(int, input().split())

# 调用函数并输出结果
print(solve_quadratic(a, b, c))