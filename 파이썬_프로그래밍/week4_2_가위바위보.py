import random
computer = random.randint(0,2)
if (computer == 0):
    computer = "가위"
elif (computer == 1):
    computer = "바위"
elif (computer == 2):
    computer = "보"

player = input("(가위, 바위, 보) 중에서 하나를 선택하세요:")
print(f"사용자: {player}\t컴퓨터: {computer}")

if (player == "가위" and computer == "보") or (player == "바위" and computer == "가위") or (player == "보" and computer == "바위"):
    print("사용자가 이겼음!")
elif (player == "가위" and computer == "바위") or (player == "바위" and computer == "보") or (player == "보" and computer == "가위"):
    print("컴퓨터가 이겼음!")
else:
    print("무승부!")