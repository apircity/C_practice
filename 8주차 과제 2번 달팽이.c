#include<stdio.h>
int arr[1001][1001] = { {0},{0} };
int main()
{
	int n, num;
	scanf_s("%d", &n);
	scanf_s("%d", &num);
	int copy = n;
	int r = n / 2;
	int want[2] = { 0, 0 };
	int i, j;
	arr[r][r] = 1; //��� �� 1 ����
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < copy - 1; j++)
		{
			if (n % 2 == 1) //Ȧ�� �϶�
			{
				arr[j + i][i] = copy * copy - j;
				arr[n - 1- i][j + i] = copy * copy -j - 1 * (copy - 1);
				arr[n - 1 - j - i][n - 1 - i] = copy * copy - j - 2 * (copy - 1);
				arr[i][n - 1 - j - i] = copy * copy - j - 3 * (copy - 1); 
			}
			else if (n % 2 == 0) //¦�� �϶�
			{
				arr[j + i][i] = copy * copy - j - 2 * (copy - 1);
				arr[n - 1 - i][j + i] = copy * copy - j - 3 * (copy - 1);
				arr[n - 1 - j - i][n - 1 - i] = copy * copy - j;
				arr[i][n - 1 - j - i] = copy * copy - j - 1 * (copy - 1);
			}
			//target ��ǥ ã��
			if (arr[j + i][i] == num)
			{
				want[0] = j + i;
				want[1] = i;
			}
			else if (arr[n - 1 - i][j + i] == num)
			{
				want[0] = n - 1 - i;
				want[1] = j + i;
			}
			else if (arr[n - 1 - j - i][n - 1 - i] == num)
			{
				want[0] = n - 1 - j - i;
				want[1] = n - 1 - i;
			}
			else if (arr[i][n - 1 - j - i] == num)
			{
				want[0] = i;
				want[1] = n - 1 - j - i;
			}
		}
		copy -= 2; //�� -2�ϱ�? -1�� �ƴϰ� ->�����غ���
	}
	for (i = 0; i < n; i++) //���
	{
		for (j = 0; j < n; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n"); //���� �ٲ� �ٹٲ�
	}
	printf("%d %d", want[0] + 1, want[1] + 1); //���� ��ǥ (1,1)-> ���� +1
	return 0;
}
