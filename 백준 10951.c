#include<stdio.h>//�� ����: A, B
int main()
{
    int A, B;
    while (scanf_s("%d %d", &A, &B) != EOF)
    {
        printf("%d\n", A + B);
    }
    return 0;
}