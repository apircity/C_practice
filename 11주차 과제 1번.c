#include<stdio.h>
#define P 5
double sv(double score[], double size);
int main()
{
	double sum = 0;
	printf("1���� �迭 ����� ���� ���� ����� ����ϴ� ���α׷�\n");
	double score[P] = { 12.3, 35.8, 57.29, 96.53, 28.37 };
	sum = sv(score, P);
	printf("����>>list[5]={12.3, 35.8, 57.29, 96.53, 28.37}\n");
	printf("ȣ��>> ����� ���� �Լ����� �迭 ����� �հ� ����\n");
	printf("\n");
	printf("��ȯ>> ����� ���� �Լ� -> ���� �Լ�\n");
	printf("���>> �迭 ����� �հ�: %.2f", sum);
}
double sv(double score[], double size)
{
	double total = 0;
	for (int i = 0; i < 5; i++)
	{
		total += score[i];
	}
	return total;
}