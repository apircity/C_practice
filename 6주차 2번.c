#include<stdio.h>
int main()
{
	int num = 0;
	//char c[10];
	char *c;
	int mok = 0;
	printf("���� �Է�: ");
	scanf_s("%d", &num);
	mok = num / 5;
	if (num <= 100 && num >= 0)
	{
		switch (mok)
		{
		case 20:
		case 19:
			c ="A+";
			break;
		case 18:
			c ="A0";
			break;
		case 17:
			c ="B+";
			break;
		case 16:
			c = "B0";
			break;
		case 15:
			c ="C+";
			break;
		case 14:
			c ="C0";
			break;
		case 13:
			c ="D+";
			break;
		case 12:
			c ="D0";
			break;
		default:
			c ="F";
			break;
		}
	}
	else
	{
		printf("�Է��� ���� %d��(��) ��뱸���� �ƴմϴ�.\n", num);
		printf("���α׷��� �ٽ� �����ϼ���");
		return 0;
	}
	printf("�Է��� ����: %d\n", num);
	printf("���� ���: %s����", c);
	return 0;
}