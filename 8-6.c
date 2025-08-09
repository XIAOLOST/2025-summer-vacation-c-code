
//处理缓存文件
#include <stdio.h>
int main(void)
{
    char password[10] = {0};
    printf("输入一串密码");
    scanf("%s",password);
   printf("%s",password);
    printf("请输入是否保存密码Y/N\n");
    while((getchar())!= '\n');
    int ch = getchar();
    if('y'== ch)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}

//使用continue跳过非数字字符
#include <stdio.h>
int main(void)
{
    char A[20] = {0};
    printf("输入一个字符串\n");
    int ch = 0;
    while ((ch = getchar()) != EOF) {
        if(ch<'0'||ch>'9')
        {
            continue;
        }
        putchar(ch);
    }
    return 0;
}
