#include<stdio.h>
int main()
{
	printf("�迭�� ����Ͽ� ���ڿ��� ����ϴ� ���α׷�\n");
	char input[20] = { 0 };
	printf("���ڿ� �Է�: ");
	scanf_s("%s", input, sizeof(input));
	printf("���ڿ� �Է�: \"%s\"");
	printf("���ڿ� ���: %d\n", &input);
}