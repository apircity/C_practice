#include<stdio.h>
int main()
{
	int num1, num2, num3;
	int max = 0;
	printf("Ű����� ������ 3���� �Է��Ͻÿ�(�����ڴ� �޸� ���).: ");
	scanf_s("%d, %d, %d", &num1, &num2, &num3);
	printf("Ű����� �Է��� ������ 3���� %d, %d, %d\n", num1, num2, num3);
	max = num1 > num2 ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2:num3);
	printf("�� �߿��� �ִ��� %d", max);
	return 0;
}