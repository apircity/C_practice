#include<stdio.h>
int main()
{
	char op;
	char str[12]; //char�� ũ�� 12�ڸ�
	scanf_s("%c", &op);
	getchar();
	scanf_s("%s", &str, sizeof(str)); //���ڿ��� ���ڿ��� ũ�� ����?�ΰ� �ʼ�
	printf("1. ���� ���:\t%c\n", op);
	printf("2. ���ڿ� �Է�:\t|%-12s|", str); //���ڿ��� �Է��ϰ� ���� �κ��� �������� ä��
	return 0;
}