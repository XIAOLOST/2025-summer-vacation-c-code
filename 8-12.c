//三次循环密码验证
#include <stdio.h>
#include <string.h>
char password[20]= {0};

int main(void)
{
    int i;

    for(i=0;i<3;i++)
    {
        printf("请输入密码：\n");
        scanf("%s",password);
        if((strcmp(password,"123456"))==0)
        {
            printf("密码正确\n");
            break;
        }
        else
        {
            printf("密码错误\n");
        }
        if(i==2)
        {
            printf("三次密码全错，退出程序\n");
        }
    }
    return 0;
}

//猜数字50--初步判断
#include <stdio.h>
int main(void)
{
    int a;

    while(1)
    {
        printf("请输入一个数\n");
        scanf("%d",&a);
        if(a>50)
        {
            printf("错误，大了,请重新输入\n");
        }
        else if(a<50)
        {
            printf("错误，小了，请重新输入\n");
        }
        else
        {
            printf("找到了,该数字为%d\n",a);
            break;
        }
    }
    return 0;
}



