#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char input[20]={0};
    system("shutdown -s -t 60");
    //shutdown -s -t 60
    //system()-ִ��ϵͳ����ģ��൱��ϵͳ��cmd
again:
    printf("��ע�⣬��ĵ��Խ���1�����ڹػ���������룺�������ػ�����ȡ��\n������:");
    scanf("%s",input);
    if(strcmp(input,"������")==0)//�Ƚ������ַ����Ƿ����
    {
        system("shutdown -a");
    }
    else
    {
        goto again;
    }
    return 0;
}
