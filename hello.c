#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char i[100];
    int b;
    system("shutdown -s -t 60");
    printf("����60��������[abc]��ȡ���Զ��ػ�\n");
    scanf("%s", i);
    b = strcmp(i, "abc");
    while (0 != strcmp(i, "abc"))
    {
        printf("��������������\n");
        scanf("%s", i);
    }
    printf("��ȡ���ػ�");
    system("shutdown -a");
}