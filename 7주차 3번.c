#include<stdio.h>
int main()
{
	int count = 1; //�ѹ��� ã�� ��� 
	char ap;
	while (1)
	{
		printf("���ĺ� �Է�: ");
		scanf_s("%c", &ap);
		getchar();
		if (ap == 'q' || ap == 'Q')
		{
			printf("�� %dȸ �����Ͽ� ���ĺ��� ã�ҽ��ϴ�.\n", count);
			printf("ã�� ���ĺ��� ��� ���� �������� \'Q\'�Դϴ�.");
			return 0;
		}
		else
		{
			printf("ã�� ���ĺ��� �ƴմϴ�. ���ĺ��� �ٽ� �Է��ϼ���.\n");
			count++;
		}
	}
}