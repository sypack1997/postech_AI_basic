# include <stdio.h>

int main(void)
{
    int number;
    printf("정수 1개를 입력하세요 : ");
    scanf("%d", &number);

    if (number % 2 == 0)
        printf("입력한 %d는 짝수입니다\n", number);
    else
        printf("입력한 %d는 홀수입니다\n", number);
    return 0;
}