#include<stdio.h>
//�Ÿ� �����̹Ƿ� ���� �ִ� ���� ��ȣ�� �ٲٱ�
int main()
{
	int num, a, b;
	int ball = 1; //ù��° 1����
	scanf_s("%d", &num);
	for (int i = 0; i < num; i++)
	{
		scanf_s("%d %d", &a, &b);
		if (ball == a) //1��° ���ڿ� ���� �ִ� ���
			ball = b;
		else if (ball == b) //2��° ���ڿ� ���� �ִ� ���
			ball == a;
	}
	printf("%d", ball);
	return 0;
}