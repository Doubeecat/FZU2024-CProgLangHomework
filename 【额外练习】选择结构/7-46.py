def calculate_tax(N):
    if N <= 1000:
        return 0.0
    elif N <= 5000:
        return (N - 1000) * 0.10
    elif N <= 10000:
        return (N - 1000) * 0.10 + (N - 5000) * 0.09
    else:
        return (N - 1000) * 0.10 + (N - 5000) * 0.09 + (N - 10000) * 0.08

# 读取输入
N = float(input())

# 调用函数并输出结果
print(f"{calculate_tax(N):.1f}")