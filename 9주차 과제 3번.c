#include<stdio.h>
void menu() //ù ����ȭ��
{
	printf("1. �л� 3���� ���� ����� ���α׷�\n");
	printf("2. �Է��� ������ ������ ��� ���α׷�\n");
	printf("3. 1���� �Է��� ���ڱ��� ���� �հ� ��� ���α׷�\n");
}
void input()
{
	int class = 0;
	char uv[10] = { 0 };
	char name[5] = { 0 };
	getchar();
	printf("1. �л� 3���� ���� ����� ���α׷�\n");
	printf("�л� 1�� ���� �Է�\n");
	printf("�б�: ");
	scanf_s("%s", uv, sizeof(uv));
	getchar();
	printf("�й�: ");
	scanf_s("%d", &class);
	printf("�̸�: ");
	getchar();
	scanf_s("%s", name, sizeof(name));
	printf("�л� 1�� ���� ���\n");
	printf("1. �б�: %s\n", uv);
	printf("2. �й�: %d\n", class);
	printf("3. �̸�: %d\n", name);
}
void sum()
{
	int n = 0;
	int sumsum = 0;
	int i;
	printf("���� �հ� ���� ���� �Է�: ");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sumsum += i;
	}
	printf("1���� %d���� ���� �հ�� %d", n, sumsum);
}
void gugudan()
{
	int i, j;
	int dan = 0;
	printf("����� �� �Է�: ");
	scanf_s("%d", &dan);
	printf("< %d�� >", dan);
		for (i = 1; i<=9; i--)
		{
			printf("%d x %d = %05d: �ٱ��� for�� (%d)�� ��, ���� for�� (%d)", dan, i,  i * dan, dan, i);
		}
		printf("\n");
}
int main()
{
	char c = { 0 };
	menu();
	char num = {0};
	while (1)
	{
		printf("���α׷��� �����ϼ���(1~3): ");
		scanf_s("%c", &num);
		getchar();
		switch (num)
		{
		case '1':
			input();
			break;
		case '2':
			sum();
			break;
		case '3':
			gugudan();
			break;
		default:
			printf("���� ������ �ƴմϴ�. ��ȣ�� �ٽ� �����ϼ���.\n");
			continue;
		}
		printf("\n");
		printf("���α׷� ���� ����!\n");
reinput:
		printf("���α׷��� �ٽ� �����ϰڽ��ϱ�?(Y/N): ");
		getchar();
		scanf_s("%c", &c);
		getchar();
		switch (c)
		{
		case 'Y':
		case 'y':
			printf("�ٽ� ����!\n");
		case 'N':
		case 'n':
			printf("���α׷� %d ���� �� ����", num);
			return 0;
		default:
			goto reinput;
		}
	}
}


