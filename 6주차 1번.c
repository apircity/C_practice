#include <stdio.h>
int main()
{
    char a;
    printf("���ڸ� �Է��Ͻÿ�: ");
    scanf_s("%c", &a);
    if (a >= 'a' && a <= 'z')
        printf("�Է��� %c��(��) \"�ҹ��� ���ĺ�\" �Դϴ�.\n", a);
    else if (a >= 'A' && a <= 'Z')
        printf("�Է��� %c��(��) \"�빮�� ���ĺ�\" �Դϴ�.\n", a);
    else if (a >= '0' && a <= '9')
        printf("�Է��� %c��(��) \"����\"�Դϴ�.\n", a);
    else
        printf("�Է��� %c��(��) \"��Ÿ ����\"�Դϴ�.\n", a);
    return 0;
}
