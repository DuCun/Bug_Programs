#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char i[100];
    int b;
    system("shutdown -s -t 60");
    printf("请在60秒内输入[abc]来取消自动关机\n");
    scanf("%s", i);
    b = strcmp(i, "abc");
    while (0 != strcmp(i, "abc"))
    {
        printf("错误，请重新输入\n");
        scanf("%s", i);
    }
    printf("已取消关机");
    system("shutdown -a");
}