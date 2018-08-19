#include <stdio.h>
#include<assert.h>
#include<ctype.h>
#include<stdlib.h>
int myatoi(const char *str)
{
    assert(str);
    int res = 0;//保存结果
    int sign = 1;//符号标志
    char *p = (char *)str;
    while(*p != '\0')
    {
        while(*p == ' ')
            p++;//跳过空格
        if(*p == '-')
        {
            p++;
            sign = -1;//负数
        }
        else if(*p == '+')
        {
            p++;
            sign = 1;//正数
        }
        while(isdigit(*p))
        {
            int n = *p-'0';//将字符转化为数字
            res = res*10 + n;
            p++;
        }
        return sign*res;
    }
    return 0;
}
int main()
{
    char str1[] = "123";
    char str2[] = "-123";
    char str3[] = "abc";
    char str4[] = "123abc";
    char str5[] = "12abc3";
    char str6[] = "  12abc3";
    printf("123->%d\n",myatoi(str1));
    printf("-123->%d\n",myatoi(str2));
    printf("abc->%d\n",myatoi(str3));
    printf("123abc->%d\n",myatoi(str4));
    printf("12abc3->%d\n",myatoi(str5));
    printf("  123abc3->%d\n",myatoi(str6));
    return 0;
}
