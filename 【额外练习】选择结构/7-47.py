def add_minutes(time_str, minutes):
    # 解析当前时间
    hh, mm = map(int, time_str.split(':'))
    
    # 将当前时间转换为分钟数
    current_minutes = hh * 60 + mm
    
    # 计算总分钟数
    total_minutes = current_minutes + minutes
    
    # 将总分钟数转换回小时和分钟
    total_hours = total_minutes // 60
    total_minutes = total_minutes % 60
    if total_hours >= 24:
        total_hours %= 24
    
    # 将24小时制的时间格式转换为12小时制的时间格式
    period = "am" if total_hours < 12 else "pm"
    hour_12 = total_hours if total_hours != 0 else 12  # 处理12小时制的0点问题
    if total_hours >= 12:
        total_hours -= 12
        period = "pm"
    else:
        period = "am"
    
    return f"{total_hours:02d}:{total_minutes:02d} {period}"

# 读取输入
current_time = input()
t = int(input())

# 调用函数并输出结果
print(add_minutes(current_time, t))