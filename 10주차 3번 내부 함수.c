#include<stdio.h>
int sumsumsum;
extern void add(int num1, int num2);
int main()
{
	printf("���� ������ �����ϴ� �Լ� ���α׷�\n");
	add(100, 200);
	printf("���� ���: %d", sumsumsum);
	return 0;
}
