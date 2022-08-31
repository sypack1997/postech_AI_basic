math = int(input("수학 점수를 입력하세요: "))
english = int(input("영어 점수를 입력하세요: "))
avg = (math + english) /2

if (avg >= 90):
    print(f"평균 점수는{avg}입니다.")
    print("학점은 A 입니다.")
elif (avg >= 80):
    print(f"평균 점수는{avg}입니다.")
    print("학점은 B 입니다.")
elif (avg >= 70):
    print(f"평균 점수는{avg}입니다.")
    print("학점은 C 입니다.")
elif (avg >= 60):
    print(f"평균 점수는{avg}입니다.")
    print("학점은 D 입니다.")
else:
    print(f"평균 점수는{avg}입니다.")
    print("학점은 F 입니다.")

print("수고 많으셨습니다!")