#include<stdio.h> 
int month=0, year=0, day=0;
int mon[20] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
int days = 0; //��ĥ�ΰ�
int main()
{
    printf("�� �� ���� ������� �Է��ϼ���.: ");
    scanf_s("%d %d %d", &year, &month, &day); //���� �Ǻ�
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        mon[2]++; //2�� 29��
    if (month == 1)
    {
        printf("%d", day);
        return 0;
    }
    else
    {
        for (int i = 0; i < month ; i++)
        {
            days += mon[i];
        }
        printf("%d�� %d�� %d���� %d�� 1�� 1�Ϻ��� %d��° �Ǵ� ���Դϴ�", year, month, day, year,  days + day);
    }
    return 0;
}
