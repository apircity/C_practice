#include<stdio.h>
int main(void)
{
    int num1, num2;
    scanf_s("%d.%d", &num1, &num2); //���� �κ� �Ǽ� �κ� ������ ����?
    printf("%d\n", num1); //���� �κ�
    printf("%d", num2);//�Ǽ� �κ�
    return 0;
}