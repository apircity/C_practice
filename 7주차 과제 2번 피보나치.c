#include <stdio.h>
int main()
{
    int n = 0;
    int sum = 0;
    printf("���� �Է�: ");
    scanf_s("%d", &n);
    long long fb[1000] = { 1, 1 };
    for (int i = 2; i <= n; i++)
        fb[i] = fb[i - 1] + fb[i - 2];
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 1) //�迭�� 0���� �����̹Ƿ� 2�� �������� �������� 1�ΰ� ¦����°
        {
            fb[i] = -fb[i];
            sum += fb[i];
            printf("%lld ", fb[i]);
        }
        else
        {
            sum += fb[i];
            printf("%lld ", fb[i]);
        }
    }
    printf("\n"); //�� �ٲ�
    printf("��: %d", sum);
}