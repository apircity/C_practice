#include<stdio.h>
#define sr 2
#define sc 3
#define dr 3
#define dc 9
int score[sr][sc];
int main()
{
	char det[dr][dc] = { "��������","��������", "��������"};
	int i, j;
	double avg=0;
	printf("2���� 3�� ���� ������ ���� ������ ����� ���� ����ϴ� ���α׷�\n");
	for (i = 0; i < 2; i++)
	{
		printf("[ %d��° ] �л��� 3�� ���� ������ �Է��Ͻÿ�.\n", i + 1);
		for (j = 0; j < 3; j++)
		{
			printf("%s: ", det[j]);
			scanf_s("%d", &score[i][j]);
			avg += score[i][j];
		}
		printf("��>> ��� ����: %.2f\n", avg / 3.0);
		avg = 0;
	}
}
