#include<stdio.h>
#include<string.h>//���ڿ��� ����
int main()
{
	char sentence[1000001]={0};
	// char �迭
	// ���ڿ��� �������� null -> null�� ���ö����� �Է¹ޱ�
	// 
#if 1
	int i=0, length = 0, count = 0;
	scanf_s("%[^\n]s", &sentence, (int)sizeof(sentence));
	length = strlen(sentence);//���ڿ��� ����


#else
	int i = 0, length = 0, count = 0;
	scanf_s("%s", &sentence, sizeof(sentence));
	length = strlen(sentence);//���ڿ��� ����
#endif
	if (length == 1)//���ڿ��� �ϳ��� �Է�
	{
		if (sentence[0] == ' ')//������ �ԷµǾ��� ��
		{
			printf("0");
			return 0;
		}
	}
	for (i = 1; i < length - 1; i++)
	{
		if (sentence[i] == ' ')
		{
			count++;
		}
	}
	printf("%d", count + 1);
	return 0;

}
//c6328&c6262