#include<stdio.h>
void shopkeeper(int cash);
int main()
{
	int count = 0, cash = 0;
	int i;
	printf("���� ������ ����� ���� �Լ��� ����� ����� ���α׷�");
reinput:
	printf("����� Ƚ�� ����(1~10): ");
	scanf_s("%d", &count);
	if (count > 10)
	{
		printf("��� ������ �ƴմϴ�.\n");
		goto reinput;
	}
	for (i=1; i <= count; i++)
	{
		printf("<%dȸ ����>\n", i);
		printf("����: ");
		scanf_s("%d", &cash);
		printf("�Ա�\t\t���\t\t�ܾ�\n");
		shopkeeper(cash);
	}
	printf("\n�� %dȸ ���� �� ���α׷� ����\n", i - 1);
}
void shopkeeper(int cash)
{
	static int balance = 0;
	if (cash >= 0)
		printf("%d\t\t\t\t", cash);
	else
		printf("\t\t%d\t\t", -cash);
	balance += cash;
	printf("%d\n", balance);
}
