//text1,通过for\while\do while:循环实现n的阶乘
//
//idea1
#include <stdio.h>
int main(void)
{
    int n;
    printf("请输入一个数n\n");
    scanf("%d",&n);
    int i;
    int N=1;
    for(i=1;i<=n;i++)
    {
        N*=i;
    }
printf("n的阶乘:%d\n",N);
    return 0;
}
//
//idea2
#include <stdio.h>
int main(void)
{
    int n;
    printf("请输入一个数n\n");
    scanf("%d",&n);
    int i=1,N=1;
    while (i<=n)
    {
        N*=i;
        i++;
    }
    printf("n的阶乘:%d\n",N);
    return 0;
}
//
//idea3
#include <stdio.h>
int main(void)
{
    int n;
    printf("请输入一个数n\n");
    scanf("%d",&n);
    int i=1,N=1;
    do
    {
        N*=i;
        i++;
    } while (i<=n);
    printf("n的阶乘:%d\n",N);
    return 0;
}

// text2,通过for循环以及封装函数F(x):求1！+2！+3！+...+n！
// 
// idea1:只封装每一个数的阶乘
#include <stdio.h>
int F(int a);
int main(void)
{
    int n,i;
    int sum = 0;
    printf("请输入一个数n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum += F(i);
    }
    printf("n的阶乘的和为%d\n",sum);
    return 0;
}

int F(int a)
{
    int s=1;
    int i;
    for(i=1;i<=a;i++)
    {
        s*=i;
    }
    return s;
}
// 
//idea2:封装两个函数，通过三重函数调用的形式简化main代码
//OP函数:求1！+2！+3！+...+n！
//E函数:求n的阶乘
#include <stdio.h>
int OP(int a);
int E(int b);

int main(void)
{
    int n;
    printf("请输入一个数字n\n");
    scanf("%d",&n);

    printf("n的阶乘的和为:%d\n",OP(n));
    return 0;
}

int OP(int a)
{
    int sum=0;
    int i;
    for(i=1;i<=a;i++)
    {
        sum += E(i);
    }
    return sum;
}

int E(int b)
{
    int s=1;
    int j;
    for(j=1;j<=b;j++)
    {
        s *= j;
    }

    return s;
}

//text3,从有序数组中找出数字数组下标
#include <stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n;
    printf("请输入一个数字：\n");
    scanf("%d",&n);
    int sz = sizeof(arr)/sizeof(arr[0]);

    int left = 0;
    int right = sz-1;
    while(left<=right)
    {
        int mid = (left + right)/2;
        if(arr[mid]<n)
        {
            left = mid+1;
        }
        else if(arr[mid]>n)
        {
            right = mid - 1;
        }
        else
        {
        printf("输入的数字n在数组中的下标为:%d",mid);
        break;
        }
    }
    if(left>right)
    {
        printf("输入的数字n不在数组中");
    }


    return 0;
}
