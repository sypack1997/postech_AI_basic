# include <stdio.h>

int main(void)
{
    int number;
    printf("���� 1���� �Է��ϼ��� : ");
    scanf("%d", &number);

    if (number % 2 == 0)
        printf("�Է��� %d�� ¦���Դϴ�\n", number);
    else
        printf("�Է��� %d�� Ȧ���Դϴ�\n", number);
    return 0;
}