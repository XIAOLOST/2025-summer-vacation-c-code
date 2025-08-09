//回文字符数组-清除屏幕(system("clear"))-循环代码延迟(sleep(1))
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
int main(void)
{
    char arr1[] = "Hello word!!";
    char arr2[] = "############";


    int len = strlen(arr1);
    int left = 0;
    int right = len - 1;

    while(left <= right)
    {
        arr2[left]=arr1[left];
        arr2[right]=arr1[right];
        left++;
        right--;
        system("clear");
        printf("%s\n",arr2);
        sleep(1);
    }

    return 0;
}