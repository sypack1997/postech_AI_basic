# include <stdio.h>

int main(void) {
int year = 0, month = 0, maxDay = 0;
printf("\n* 년과 월을 입력하세요 : ");
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
        printf("%d년 %d월의 말일은 %d일 입니다.\n", year, month, maxDay);
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        maxDay = 30;
        printf("%d년 %d월의 말일은 %d일 입니다.\n", year, month, maxDay);
        break;
        
    case 2:
        if((year%4 == 0) && (year%100 != 0) || (year%400 == 0))
            {maxDay = 29;
            printf("%d년 %d월의 말일은 %d일(윤년)입니다\n", year, month, maxDay);
            break;}
        else
            {maxDay = 28;
            printf("%d년 %d월의 말일은 %d일 입니다.\n", year, month, maxDay);
            break;}
    default:
        printf("입력이 잘못 되었습니다!\n");
    }
return 0;
}