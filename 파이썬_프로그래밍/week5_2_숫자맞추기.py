import random
computer = random.randint(1,100)

print("1부터 100  사이의 숫자를 맞추시오")
count = 0

while True:
    n = int(input("숫자를 입력하시오: "))
    count +=1
    if n < computer:
        print("낮음!")
    elif n > computer:
        print("높음!")
    else:
        print(f"축하합니다. 시도횟수 = {count}")
        break