#include<stdio.h>
int main()
{
	int num = 0;
	int gap = 0; //�ʿ��� ���� ��
	printf("�� ��: ");
	scanf_s("%d", &num);
	gap = num - 1;
	int count = 1; //�Ƕ�̵��� ����
	for (int i = 1; i <= num; i++)
	{
		for (int i = 1; i <= gap; i++)
		{
			printf(" ");
		}
		for (int j = 1; j <= count; j++)
		{
			if (j % 2 == 1)
				printf("*");
			else
				printf(" ");
			if (j == count)
				printf("\n");
		}
		count += 2;
		gap -= 1;
	}
	return 0;
}