#include <stdio.h>
int main(void)
{
    int x,y;
    char c;

    printf("문자 1개 입력하세요: ");
    scanf("%c", &c);

    printf("입력한 문자 %c의 아스키 10진수는 %d 입니다\n", c, c);
    printf("입력한 문자 %c의 다음 문자는 %c 입니다\n", c, c+1);
    printf("(%c < %c)는 %d 입니다\n", c, c, (c<c+1)); /* (a<b)는 1 입니다 // 참(1), 거짓(0)을 나타낸다. */ 
    
    printf("정수 2개 입력하세요 : ");
    scanf("%d %d", &x, &y);
    printf("(%d >= %d)는 %d 입니다\n", x, y, (x>=y));
    printf("(%d == %d)는 %d 입니다\n", x, y, (x==y));
    printf("(%d != %d)는 %d 입니다\n", x, y, (x!=y));

    return 0;

}