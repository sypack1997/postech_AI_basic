#include<stdio.h>
#define MAX 3

struct stu
{
    int ID;
    float kor, eng, math;
    float avg;
    char grade;
};

int main(void)
{
    struct stu s[MAX]; //����ü ����(�迭)����
    int i,j,korsum=0,engsum=0,mathsum=0; //���� ����
    printf("�й�, ����(����,����,����)�� �Է��ϼ���.\n");
    for(i=0; i<MAX; i++)
    {
        scanf("%d %f %f %f", &s[i].ID, &s[i].kor, &s[i].eng, &s[i].math);
    }

    printf("\n�Էµ� ����\n");
    for(i=0; i<MAX; i++)
    {
        printf("%d %5.2f %5.2f %5.2F\n", s[i].ID, s[i].kor, s[i].eng, s[i].math);
    }

    for(i=0; i<MAX; i++)
    {
        s[i].avg = (s[i].kor + s[i].eng + s[i].math)/3.0; //��հ��
        korsum +=s[i].kor; //�����������
        engsum +=s[i].eng;
        mathsum +=s[i].math;
    }

    for(i=0; i<MAX; i++) //���� ���
    {
        if(s[i].avg>=90)
            s[i].grade='A';
        else if(s[i].avg>=80)
            s[i].grade='B';
        else if(s[i].avg>=70)
            s[i].grade='C';
        else if(s[i].avg>=60)
            s[i].grade='D';
        else
            s[i].grade='F';
    }

    printf("\n ** ���� ** \n"); //�й�, ���, ���� ���
    for(i=0; i<MAX; i++)
    {
        printf("�й� : %5d\t���:%5.2f\t����: %c\n", s[i].ID, s[i].avg, s[i].grade); // \t : tab
    }
    printf("\n ** ���� ��� ** \n");
    printf("����: %5.2f ����: %5.2f ����: %5.2f\n", korsum/3.0, engsum/3.0, mathsum/3.0);
    return 0;
}