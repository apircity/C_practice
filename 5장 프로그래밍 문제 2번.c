#include<stdio.h>
int main()
{
	int number, addr; //number: �Է¹޴� ����
	int* poval; //������
	printf("Ű����� ���� 1���� �Է��Ͻÿ�.: ");
	scanf_s("%d", &number);
	poval = &number;//�ּ�
	addr = *poval;//���� ��
	printf("Ű����� �Է��� ���� ����� �ּ�(16���� ǥ��): %X\n", poval);
	printf("������ ���� *poval�� ����� ��(10���� ǥ��): %d", addr);
	return 0;
}