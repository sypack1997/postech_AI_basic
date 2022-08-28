# include <stdio.h>

int main(void) {
int year = 0, month = 0, maxDay = 0;
printf("\n* ��� ���� �Է��ϼ��� : ");
scanf("%d %d", &year, &month);
switch(month)
    { case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        maxDay = 31;
        printf("%d�� %d���� ������ %d�� �Դϴ�.\n", year, month, maxDay);
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        maxDay = 30;
        printf("%d�� %d���� ������ %d�� �Դϴ�.\n", year, month, maxDay);
        break;
        
    case 2:
        if((year%4 == 0) && (year%100 != 0) || (year%400 == 0))
            {maxDay = 29;
            printf("%d�� %d���� ������ %d��(����)�Դϴ�\n", year, month, maxDay);
            break;}
        else
            {maxDay = 28;
            printf("%d�� %d���� ������ %d�� �Դϴ�.\n", year, month, maxDay);
            break;}
    default:
        printf("�Է��� �߸� �Ǿ����ϴ�!\n");
    }
return 0;
}