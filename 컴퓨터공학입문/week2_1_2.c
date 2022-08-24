#include <stdio.h>
int add(int x, int y);

int main(void) /*1*/
{
    int a, b, sum; /*2 변수선언*/
    scanf("%d %d", &a, &b); /*3 값 입력*/
    sum = add(a,b); /*4 5번으로 함수호출*/ /*7*/
    printf("%d", sum); /*8*/
    return 0; /*9*/
}

int add(int x, int y) /*5*/
{
    return x + y; /*6*/
}