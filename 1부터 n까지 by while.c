#include<stdio.h>
int main()
{
	int num = 0;
	int sum = 0;
	int count = 0;
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
		while (1)
		{
			count++;
			sum += count;
			if (count == num)
				break;
		}
		printf("1���� %d������ ���� %d�Դϴ�", num, sum);
		return 0;
	}
}