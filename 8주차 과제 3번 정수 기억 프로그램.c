#include<stdio.h>
int main()
{
	printf("[���� ��� ���α׷�]\n");
	int num = 0; //���� ����
	int c = 0;
	while (1)
	{
		printf("1. ���� �Է�   2.���� ���   3. 0�ʱ�ȭ   4. ����\n");
		scanf_s("%d", &c);
		switch (c)
		{
		case 1:
			printf("������ �Է����ּ���: ");
			scanf_s("%d", &num);
			printf("===================================================\n");
			break;
		case 2:
			printf("����� ����: %d\n", num);
			printf("===================================================\n");
			break;
		case 3:
			printf("0���� �ʱ�ȭ\n");
			num = 0;
			printf("===================================================\n");
			break;
		case 4:
			printf("\n");
			printf("�����մϴ�.");
			return 0;
		default:
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���.\n");
		}
	}
	return 0;
}