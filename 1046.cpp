#include <stdio.h>
int main(void)
{
    int num1, num2, num3, sum; // ���� 3�� ����
    float avr; 
    scanf_s("%d %d %d", &num1, &num2, &num3); //���� 3�� �Է�
    sum = num1 + num2 + num3; 
    avr = sum / 3.0; //float������ ��ȯ�� ���
    printf("%d\n", sum);
    printf("%.01f", avr); //�Ҽ� ù°�ڸ�����(��°�ڸ� �ݿø�)
    return 0;
}