#include<stdio.h>
#define a 1.609

int main(void)
{
    double miles, kilometer;
    printf("Enter the distance in miles>");
    scanf("%lf", &miles);
    kilometer = miles * a;

    printf("That equls %f kilometers.\n", kilometer);
    return 0;

}