#include<stdio.h>//������ ���ذ� �ȵ�
int main()
{
	int num1, num2;
	int *poval1, *poval2;
	printf("���� 2���� �Է��Ͻÿ�(�����ڴ� �޸� ���). : ");
	scanf_s("%d, %d", &num1, &num2);
	printf("�Է��� ���� 2���� %d, %d\n", num1, num2);
	poval1 = &num1;
	poval2 = &num2;
	printf("%d�� �ּҰ�: %d\n", num1, poval1);
	printf("%d�� �ּҰ�: %d", num2, poval2);
	return 0;
}