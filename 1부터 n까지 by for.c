#include<stdio.h>
int main()
{
	int num = 0;
	int sum = 0;
retry:
	printf("������ ���� ���ұ��?: ");
	scanf_s("%d", &num);
	if (num < 0)
	{
		printf("���� ������ ������� �ʽ��ϴ�\n");
		printf("���α׷��� �ٽ� �����մϴ�");
		goto retry;
	}
	else
	{
		for (int i = 1; i < num + 1; i++)
		{
			sum += i;
		}
		printf("1���� %d������ ���� %d�Դϴ�", num, sum);
	}
	return 0;
}