#include<stdio.h>
int main()
{
	int num = 0;
	int sum = 0;
	one: //goto�� back
	printf("������ �Է�: ");
	scanf_s("%d", &num);
	if (num > 0)
	{
		for (int i = 1; i <= num; i++)
		{
			if (i % 2 == 1)
				sum += i;
		}
		printf("1���� %d���� Ȧ���� ���� �հ�� %d", num, sum);
	}
	else if (num < 0)
	{
		printf("���� �������� ������� �ʽ��ϴ�.\n");
		printf("���� �������� �ٽ� �Է��ϼ���.\n");
		goto one;
	}
}