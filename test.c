#include <stdio.h>
#include<string.h>
#include<unistd.h>
int main()
{
    char arr1[] = "hello world";
    char arr2[] = "!!!!!!!!!!!";
    int left = 0;
    int right = strlen(arr1)-1;
    printf("%s\n",arr2);
    //while循环实现
    while(left <= right)
    {
        sleep(1);
        arr2[left] = arr1[left];
        arr2[right] = arr1[right];
        left++;
        right--;
        printf("%s\n",arr2);
    }
    return 0;
}
