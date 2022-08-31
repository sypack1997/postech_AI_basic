money, c500, c100, c50, c10 = 0,0,0,0,0

money = int(input("교환할 돈은 얼마?"))

c500 = money//500
money%=500
print(f"오백원짜리는 {c500}개")

c100=money//100
money%=100
print(f"백원짜리는 {c100}개")

c50=money//50
money%=50
print(f"오십원짜리는 {c50}개")

c10=money//10
money%=10
print(f"십원짜리는 {c10}개")