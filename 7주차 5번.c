#include<stdio.h>
int main()
{
	int count = 1; //ù ����
	int i, j;
	char c;
	do
	{
	reset:
		printf("<%dȸ ����>\n", count);
		for (int i = 9; i > 0; i--)
		{
			for (int j = 9; j > 1; j--)
			{
				printf("%d x %d = %d   ", j, i, i * j);
			}
			printf("\n");
		}
retry:		
		printf("���α׷��� �ٽ� �����ϰڽ��ϱ�? (Y/N): ");
		scanf_s("%c", &c);
		getchar();
		switch (c)
		{
			case 'Y':
			case 'y':
				count++;
				goto reset;
				break;
			case 'N':
			case 'n':
				printf("�� %dȸ ���� �� ���α׷��� �����մϴ�.", count);
				return 0;
				break;
			default:
				printf("���ĺ��� �ٽ� �Է��ϼ���.\n");
				goto retry;
				break;
		}
	} while(1);
}