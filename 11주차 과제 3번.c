#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu();
void heart();
int main()
{
	int num = 0;
	while (1)
	{
		menu();
		printf("��ȣ ����: ");
		scanf_s("%d", &num);
		switch (num)
		{
		case 1:
			heart();
			num = 0;
			break;
		case 2:
			printf("���α׷� ����!");
			return 0;
			break;
		}
	}
}
void menu()
{
	printf("�ᷣ�� �Լ��� ��Ʈ�� ã�� ���α׷�\n");
	printf("1. ���α׷� ����\n");
	printf("2. ���α׷� ����\n");
}
void heart()
{
	int arr[11][14] = { {0},{0} };
	srand(time(NULL));
	for (int i = 0; i < 11; i++)
	{
		for (int j = 0; j < 14; j++)
		{
			arr[i][j] = (rand() % 99);
		}
	}
	printf("------------------------------------------------------------\n");
	for (int i = 0; i < 11; i++)
	{
		for (int j = 0; j < 14; j++)
		{
			if (arr[i][j] > 20)
			{
				printf("* ");
			}
			else
				printf("��");
		}
		printf("\n");
	}
	printf("\n");
	printf("------------------------------------------------------------\n");
}