#include <stdio.h>
int add(int x, int y);
int avg(int x, int y);
char grade(int avgg);

int main(void)
{
    int math, english, sum, avgg;
    char score;
    printf("수학 점수를 입력하세요: ");
    scanf("%d", &math);
    printf("영어 점수를 입력하세요: ");
    scanf("%d", &english);
    sum = add(math, english);
    avgg = avg(math, english);
    printf("평균: %d\n", avgg);
    score = grade(avgg);
    printf("학점: %c\n", score);
    return 0;

}

int add(int x, int y)
{
    return x + y;
}

int avg(int x, int y)
{
    return (x + y) /2;
}

char grade(int x)
{
    if (x >= 90)
        printf("A");
    else if (x >= 80)
        printf("B");
    else if (x >=70)
        printf("C");
    else if (x >= 60)
        printf("D");
    else
        printf("F");
}