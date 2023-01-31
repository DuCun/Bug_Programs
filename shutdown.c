#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char i[2];
    int b;
    system("shutdown -s -t 60");
    scanf("%s",i);
    b=strcmp(i,"abc");
    if(!b)
    {
        system("shutdown -a");
        printf("the task is killed !\n");
    }
    else
    {
        printf("input error");
    }
    return 0;
}