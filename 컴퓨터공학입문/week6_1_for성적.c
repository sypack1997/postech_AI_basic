#include <stdio.h>

int main(void) {
int i, student, stuID, score; //반복변수, 학생수, 학번, 점수
char grade; //학점
float total = 0;
printf("***컴퓨터공학입문 성적***\n");
printf("수강인원을 입력하세요 : ");
scanf("%d", &student);

for(i=0; i<student; i++)
{
    printf("학번과 점수를 순서대로 입력하세요 : ");
    scanf("%d %d", &stuID, &score);
    total += score;
    if (score >= 90)
        grade = 'A';
    else if (score >=80)
        grade = 'B';
    else if (score >=70)
        grade = 'C';
    else if (score >=600)
        grade = 'D';
    else
        grade = 'F';
    printf("학번: %d, 학점: %c\n", stuID, grade);
}
printf("과목평균: %5.2f\n", total/student);
return 0;
}


