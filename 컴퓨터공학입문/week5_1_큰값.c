#include <stdio.h>

int main(void)
{
    int x,y,max;
    printf("Input two intergers: ");
    scanf("%d %d", &x, &y);

    if (x > y)
        max = x;
    else
        max = y;
    
    printf("The maximum value is %d\n", max);
    return 0;
}