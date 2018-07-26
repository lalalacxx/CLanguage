#include <stdio.h>
#include<stdlib.h>
void reverse(char *start,char *end)
{
    while(start < end)
    {
        char tmp = *start;
        *start = *end;
        *end = tmp;
        start++;
        end--;
    }
}
void reverse_str(char arr[],int sz)
{
    char *left = arr;
    char *right = arr+sz-1;
    char *start = arr;
    char *end = arr;
    reverse(left,right);
    //至此，字符串的整体翻转已经完成
    //接下来对每一个单词进行翻转
    while(*end != '\0')
    {
        while((*end != ' ') && (*end != '\0'))
        {
            end++;
        }
        reverse(start,end-1);
        if(*end != '\0')
        {
            start = end+1;
            end = start;
        }
    }
}
int main()
{
    char arr[] = "student a am i";
    printf("请输入你想要翻转的字符串：");
    gets(arr);
    int sz = sizeof(arr)/sizeof(arr[0])-1;
    reverse_str(arr,sz);
    printf("%s\n",arr);
    return 0;
}
