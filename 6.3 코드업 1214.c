#include<stdio.h> 

int month, year;
int day[20] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };

int main()
{
    scanf_s("%d %d", &year, &month);
    //���� �Ǻ�
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        day[2]++;
    //�����̶�� 2�� 29��
    printf("%d ", day[month]);

    return 0;
}
