# 定义手势的胜负关系
win_relations = {
    1: 3,  # 剪刀胜布
    2: 1,  # 石头胜剪刀
    3: 2,  # 布胜石头
    4: 1,  # 一指禅胜剪刀
    4: 2,  # 一指禅胜石头
    4: 3   # 一指禅胜布
}

# 读取输入
alice_wins = 0
bob_wins = 0
for _ in range(3):
    alice, bob = map(int, input().split())
    
    # 检查非法输入
    if alice not in [1, 2, 3, 4] or bob not in [1, 2, 3, 4]:
        continue
    
    # 判断胜负
    if alice == bob:
        continue  # 平局，不更新胜场数
    elif win_relations.get(alice) == bob:
        alice_wins += 1
    else:
        bob_wins += 1

# 确定最终胜者
if alice_wins > bob_wins:
    print("Alice")
elif bob_wins > alice_wins:
    print("Bob")
else:
    print("No winner")