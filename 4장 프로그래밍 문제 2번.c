#include<stdio.h>
int main()
{
	float mile, km = 0;
	printf("������ ų�ι��ͷ� ȯ���ϴ� ���α׷�\n");
	const float m = 1.61;//��ȣ ��� m
	printf("���� �Է�(�Ҽ� ��° �ڸ�): ");
	scanf_s("%f", &mile);
	km = m * mile;
	printf("%0.2f������ %0.2fkm�Դϴ�.", mile, km);
	return 0;
}