#include<stdio.h>
int main()
{
	int count = 1; //ù ����
	int i, j;
	char c;
	while (1)
	{
reset:
		printf("<%dȸ ����>\n", count);
		for (int i = 9; i > 1; i--)
		{
			for (int j = 9; j > 1; j--)
			{
				printf("%d x %d = %d\n", i, j, i * j);
			}
			printf("\n");
		}
retry:		
		printf("���α׷��� �ٽ� �����ϰڽ��ϱ�? (Y/N): ");
		scanf_s("%c", &c);
		getchar();
		if (c == 'y' || c == 'Y')
		{
			count++;
			goto reset;
		}
		else if (c == 'n' || c == 'N')
		{
			printf("�� %dȸ ���� �� ���α׷��� �����մϴ�.", count);
			return 0;
		}
		else
		printf("���ĺ��� �ٽ� �Է��ϼ���.\n");
	    goto retry;
	}
	return 0;
}