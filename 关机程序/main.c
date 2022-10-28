#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char input[20]={0};
    system("shutdown -s -t 60");
    //shutdown -s -t 60
    //system()-执行系统命令的，相当于系统的cmd
again:
    printf("请注意，你的电脑将在1分钟内关机，如果输入：我是猪，关机将会取消\n请输入:");
    scanf("%s",input);
    if(strcmp(input,"我是猪")==0)//比较两个字符串是否相等
    {
        system("shutdown -a");
    }
    else
    {
        goto again;
    }
    return 0;
}
