n = int(input("정수를 입력하세요: "))
sum = 0

while n >0:
    digit = n % 10
    sum = sum + digit
    n = n // 10

print(f"자리수의 합은 {sum} 입니다.")
