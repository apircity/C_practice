#include<stdio.h>
void login(int count)
{
	static count = 0;
	count++;
	if (count == 1)
		printf("1ȸ ����: �α��� ����\n");
	else
	{
		printf("%dȸ ����; ���� �α��� ����\n", count);
		printf("Ȯ��\n");
	}
}

int main()
{
	int count;
	printf("���� ���� ������ �α��� ���θ� �Ǻ��ϴ� ���α׷�\n");
	printf("for������ �α��� �Ǻ� �Լ� 3ȸ ȣ��\n");
	for (int i = 0; i < 3; i++)
	{
		login(count);
	}
	printf("�� 3ȸ ���� �� ���α׷� ����");

}