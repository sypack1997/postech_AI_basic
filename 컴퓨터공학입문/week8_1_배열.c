#include<stdio.h>
void add_arrays(const int a[], const int b[], int absum[], int n);

int main(void)
{
    int x[5] = {10, 20, 30, 40, 50};
    int y[5] = {45, 55, 33, 28, 35};
    int xysum[5] = {0};
    int i = 0, n = 5;

    printf("\n x 배열원소 출력: ");
    for(i=0; i<n; i++)
    {
    printf("%3d", x[i]);
    }

    printf("\n\n y배열원소 출력: ");
    for(i=0; i<n; i++)
    {
        printf("%3d", y[i]);
    }

    add_arrays(x,y,xysum,n);

    printf("\n\n x + y 결과 출력: ");
    for (i=0; i<n; i++)
    {
        printf("%3d", xysum[i]);
    }
    return 0;
}

// a,b : 원본 배열의 값을 변경할 수 없도록 const사용, absum : 원본배열의 값을 변경해야하므로 const생략
void add_arrays(const int a[], const int b[], int absum[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        absum[i] = a[i] + b[i];
    }
}
// 매개변수에서 배열형식을 받을 경우, 포인터를 쓰지않아도 배열 연산자를 사용하여 원본의 배열을 직접 접근하여 읽거나 쓸수 있다.