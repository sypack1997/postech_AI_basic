student = 5

scores = []
scoreSum = 0

for i in range(student):
    n = int(input("성적을 입력하세요: "))
    scores.append(n)
    scoreSum += n

scoreAvg = scoreSum / len(scores)
highScoreStudents = 0

for i in range(len(scores)):
    if scores[i] >= 80:
        highScoreStudents +=1

print(f"성적 평균은 {scoreAvg} 입니다.")
print(f"80점 이상 성적을 받은 학생은 {highScoreStudents}명 입니다.")