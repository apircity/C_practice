#include<stdio.h>
void hanoi(int n, char from, char tmp, char to)
{
	if (n == 1)
	{
		printf("���� 1: %c => %c�� �̵�\n", from, to);
	}
	else
	{
		hanoi(n - 1, from, to, tmp);
		printf("���� %d: %c => %c�� �̵�\n", n, from, to);
		hanoi(n - 1, tmp, from, to);
	}
}
int main()
{
	char c = { 0 };
	do
	{
		{
			    printf("[ ž�� ���� �̵��ϴ� �Լ� ȣ��]\n");
				hanoi(3, 'A', 'B', 'C');
				printf("\n");
				printf("������ ��� �̵��Ͽ����ϴ�.\n");
				reset:
			printf("���α׷��� �ٽ� �����ϰڽ��ϱ�? (Y/N):  ");
			scanf_s("%c", &c);
			getchar();
			switch (c)
			{
			case 'Y':
			case 'y':
				break;
			case 'N':
			case 'n':
				printf("���α׷��� �����մϴ�.");
				return 0;

			default:
				goto reset;
			}
		}
	} while (1);
}