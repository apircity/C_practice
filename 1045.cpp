#include <stdio.h>
int main()
{
    int num1, num2;
    scanf_s("%d %d", &num1, &num2); //num1, num2 ����
    printf("%d\n", num1 + num2); //���ϱ�
    printf("%d\n", num1 - num2); //����
    printf("%d\n", num1 * num2); //���ϱ�
    printf("%d\n", num1 / num2); //��->�������� �������� ����
    printf("%d\n", num1 % num2);  //������->������ �� ����ϱ�
    printf("%.02f", (float)num1 / (float)num2); //int�� float������ ��ȯ �� �� ���
    return 0;
}