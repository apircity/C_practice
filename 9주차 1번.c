#include<stdio.h>
#define PI 2.5399 //inch
#define PS 3.3058 //��
void in(float num)
{
	printf("��> %.2f��ġ(inch)�� %.2f��Ƽ����(cm) ", num, num * PI);
}
void p(float num)
{
	printf("��> %.2f���� %.2f������", num, num * PS);
}

int main()
{
	float num = 0;
	char c = { 0 }; //���� �Է¹��� ����
	while (1)
	{
		printf("A. ��ġ�� ��Ƽ���ͷ� ȯ���ϴ� ���α׷�\n");
		printf("B. ���� �����ͷ� ȯ���ϴ� ���α׷�\n");
		printf("Q. ���α׷� ����\n");
		printf("\n");
		printf("����: ");
		scanf_s("%c", &c);
		getchar();
		if (c == 'A' || c == 'a')
		{
			printf("A. ��ġ�� ��Ƽ���ͷ� ȯ���ϴ� ���α׷�\n");
			printf("��> ��ġ(inch)�� �Է��ϼ���: ");
			scanf_s("%f", &num);
			getchar();
			printf("\n");
			printf("[��ġ�� ��Ƽ���ͷ� ȯ���ϴ� �Լ� ȣ��]\n");
			printf("\n");
			in(num);
			printf("\n");
			printf("���������� ȯ���� �����Ͽ����ϴ�.\n");
			printf("\n");

		}
		else if (c == 'B' || c == 'b')
		{
			printf("B. ���� �����ͷ� ȯ���ϴ� ���α׷�\n");
			printf("��> ���� �Է��ϼ���: ");
			scanf_s("%f", &num);
			getchar();
			printf("\n");
			printf("[���� �����ͷ� ȯ���ϴ� �Լ� ȣ��]\n");
			printf("\n");
			p(num);
			printf("\n");
			printf("���������� ȯ���� �����Ͽ����ϴ�.\n");
			printf("\n");
		}
		else if (c == 'q' || c == 'Q')
		{
			printf("���α׷� ����");
			return 0;
		}
		else
		{
			continue;
		}
	}
}

