#include<stdio.h>

int main(void)
{
    int x, y, add, sub, mul, div, mod;
    printf("����1 �Է��ϼ��� : ");
    scanf("%d", &x);
    printf("����2 �Է��ϼ��� : ");
    scanf("%d", &y);

    add  = x+y;
    sub = x-y;
    mul = x*y;
    div = x/y;
    mod = x%y;

    printf("%d + %d = %d �Դϴ�\n", x, y, add);
    printf("%d - %d = %d �Դϴ�\n", x, y, sub);
    printf("%d * %d = %d �Դϴ�\n", x, y, mul);
    printf("%d / %d = %d �Դϴ�\n", x, y, div);
    printf("%d %% %d = %d �Դϴ�\n", x, y, mod);
    return 0;
}