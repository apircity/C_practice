#include<stdio.h>//�Է� ����:N, ����:gap
int main()
{
    int N;
    scanf_s("%d", &N);
    for (int gap = 1; gap <= N; gap++)
    {
        for (int i = 0; i < N - gap; i++)
        {
            printf(" ");
        }
        for (int i = 0; i < gap; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}