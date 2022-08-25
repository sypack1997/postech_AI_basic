#include<stdio.h>

int main(void)
{
    int x, y, add, sub, mul, div, mod;
    printf("정수1 입력하세요 : ");
    scanf("%d", &x);
    printf("정수2 입력하세요 : ");
    scanf("%d", &y);

    add  = x+y;
    sub = x-y;
    mul = x*y;
    div = x/y;
    mod = x%y;

    printf("%d + %d = %d 입니다\n", x, y, add);
    printf("%d - %d = %d 입니다\n", x, y, sub);
    printf("%d * %d = %d 입니다\n", x, y, mul);
    printf("%d / %d = %d 입니다\n", x, y, div);
    printf("%d %% %d = %d 입니다\n", x, y, mod);
    return 0;
}