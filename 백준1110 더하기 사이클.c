#include<stdio.h>//number: ó�� �Է¹��� ����, result: ������, a:result�� ���� �ڸ� ��
//b:result�� ���� �ڸ���, c:���ο� ���� ���� �ڸ���, d:���ο� ���� ���� �ڸ� ��
int main()
{
    int number;
    scanf_s("%d", &number);
    int result, a, b, c, d;
    int count = 0;
    result = number;
    while (1)
    {
        a = number / 10;
        b = number % 10;
        c = (a + b) % 10;
        d = (b % 10) * 10;
        number = c + d;
        count++;
        if (number == result) break;
    }
    printf("%d", count);
    return 0;
}