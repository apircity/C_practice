#include<stdio.h>
int main()
{
	printf("������ ������ ����Ͽ� ���ڿ��� ����ϴ� ���α׷�\n");
	char *str[100] = { 0 };//���ڿ�
	printf("���ڿ� �Է�: ");
	scanf_s("%s", &str, sizeof(str));
	printf("���ڿ� ��� ���: %s\n", str);
	printf("���ڿ� ��� �ּ�: %X", &str);
}