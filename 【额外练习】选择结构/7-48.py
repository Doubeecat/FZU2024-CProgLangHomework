def turtle_rabbit_race(v1, v2, t1, tt, L):
    # 计算兔子在休息前跑的距离
    rabbit_distance_before_rest = v2 * t1
    # 计算兔子在休息期间乌龟跑的距离
    turtle_distance_during_rest = v1 * tt
    # 计算兔子在休息后还需要跑的距离
    rabbit_distance_after_rest = L - rabbit_distance_before_rest
    # 计算兔子在休息后跑完剩余距离所需的时间
    rabbit_time_after_rest = rabbit_distance_after_rest / v2
    # 计算乌龟在兔子休息后跑完剩余距离所需的时间
    turtle_time_after_rest = (L - (v1 * t1 + turtle_distance_during_rest)) / v1
    # 比较乌龟和兔子跑完剩余距离所需的时间
    if turtle_time_after_rest - rabbit_time_after_rest < 1e-11:
        return "Bingo"
    else:
        return "Poor"
a,b,c,d,e = [int(x) for x in input().split()]
# 输入样例1
print(turtle_rabbit_race(a,b,c,d,e))  # 输出: Bingo
