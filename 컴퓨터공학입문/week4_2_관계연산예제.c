#include <stdio.h>
int main(void)
{
    int x,y;
    char c;

    printf("���� 1�� �Է��ϼ���: ");
    scanf("%c", &c);

    printf("�Է��� ���� %c�� �ƽ�Ű 10������ %d �Դϴ�\n", c, c);
    printf("�Է��� ���� %c�� ���� ���ڴ� %c �Դϴ�\n", c, c+1);
    printf("(%c < %c)�� %d �Դϴ�\n", c, c, (c<c+1)); /* (a<b)�� 1 �Դϴ� // ��(1), ����(0)�� ��Ÿ����. */ 
    
    printf("���� 2�� �Է��ϼ��� : ");
    scanf("%d %d", &x, &y);
    printf("(%d >= %d)�� %d �Դϴ�\n", x, y, (x>=y));
    printf("(%d == %d)�� %d �Դϴ�\n", x, y, (x==y));
    printf("(%d != %d)�� %d �Դϴ�\n", x, y, (x!=y));

    return 0;

}