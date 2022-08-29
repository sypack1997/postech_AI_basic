#include<stdio.h>
#define MAX 3

struct stu
{
    int ID;
    float kor, eng, math;
    float avg;
    char grade;
};

int main(void)
{
    struct stu s[MAX]; //구조체 변수(배열)선언
    int i,j,korsum=0,engsum=0,mathsum=0; //변수 선언
    printf("학번, 점수(국어,영어,수학)을 입력하세요.\n");
    for(i=0; i<MAX; i++)
    {
        scanf("%d %f %f %f", &s[i].ID, &s[i].kor, &s[i].eng, &s[i].math);
    }

    printf("\n입력된 점수\n");
    for(i=0; i<MAX; i++)
    {
        printf("%d %5.2f %5.2f %5.2F\n", s[i].ID, s[i].kor, s[i].eng, s[i].math);
    }

    for(i=0; i<MAX; i++)
    {
        s[i].avg = (s[i].kor + s[i].eng + s[i].math)/3.0; //평균계산
        korsum +=s[i].kor; //과목총점계산
        engsum +=s[i].eng;
        mathsum +=s[i].math;
    }

    for(i=0; i<MAX; i++) //학점 계산
    {
        if(s[i].avg>=90)
            s[i].grade='A';
        else if(s[i].avg>=80)
            s[i].grade='B';
        else if(s[i].avg>=70)
            s[i].grade='C';
        else if(s[i].avg>=60)
            s[i].grade='D';
        else
            s[i].grade='F';
    }

    printf("\n ** 성적 ** \n"); //학번, 평균, 학점 출력
    for(i=0; i<MAX; i++)
    {
        printf("학번 : %5d\t평균:%5.2f\t학점: %c\n", s[i].ID, s[i].avg, s[i].grade); // \t : tab
    }
    printf("\n ** 과목별 평균 ** \n");
    printf("국어: %5.2f 영어: %5.2f 수학: %5.2f\n", korsum/3.0, engsum/3.0, mathsum/3.0);
    return 0;
}