def add(a,b):
    return a+b
def swap(a,b):
    a,b = b,a
    return a,b

a = int(input("정수1 입력: "))
b = int(input("정수2 입력: "))
sum = add(a,b)
avg = sum/2
print(f"두 수의 합 : {sum}")
print(f"두 수의 평균 : {avg}")
a,b = swap(a,b)
print(f"두 수의 교환 : {a,b}")