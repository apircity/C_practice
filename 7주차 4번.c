#include<stdio.h>
int main()
{
	int num = 0;
	int sum = 0;
	int count = 1;
one: //goto�� back
	printf("������ �Է�: ");
	scanf_s("%d", &num);
	if (num > 0)
	{
		do {
			sum += count;
			count++;
		} while (count < num + 1);
		printf("1���� %d���� ���� �հ�� %d", num, sum);
	}
	else if (num < 0)
	{
		printf("���� �������� ������� �ʽ��ϴ�.\n");
		printf("���� �������� �ٽ� �Է��ϼ���.\n");
		goto one;
	}
}