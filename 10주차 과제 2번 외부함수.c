int sum;
static int result;
void plus(int num1)
{
	printf("plus(): %d ���ϱ�\n", num1);
	result += num1;
}
void sub(int num1)
{
	printf("sub(): %d ����\n", num1);
	result -= num1;
}
void mul(int num1)
{
	printf("mul(): %d ���ϱ�\n", num1);
	result *= num1;
}
void div(int num1)
{
	printf("div(): %d ������\n", num1);
	result /= num1;
	sum = result;
}