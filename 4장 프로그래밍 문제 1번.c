#include<stdio.h>
#define PI 2.54 //2.54->PI
int main()
{
	printf("��ġ�� ��Ƽ���ͷ� ȯ���ϴ� ���α׷�\n");
	float inch, cm=0;
	printf("��ġ �Է�(�Ҽ� ��° �ڸ�): ");
	scanf_s("%f", &inch);
	cm = PI * inch;
	printf("%0.2f��ġ�� %0.2fcm�Դϴ�.", inch, cm);
}
