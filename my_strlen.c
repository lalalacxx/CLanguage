#include <stdio.h>
//计数器方式
int my_strlen1(const char *str)
{
    int count = 0;
    char *p = (char *)str;
    while(*p)
    {
        count++;
        p++;
    }
    return count;
}
//递归方式
int my_strlen2(const char *str)
{
    char *p = (char *)str;
    if(*p == '\0')
    {
        return 0;
    }
    return 1 + my_strlen2(str+1);
}
//指针-指针方式
int my_strlen3(const char *str)
{
    char *p = (char *)str;
    while(*p)
    {
        p++;
    }
    return p-str;
}
int main()
{
    const char *str = "hello";
    int ret1 = my_strlen1(str);
    int ret2 = my_strlen2(str);
    int ret3 = my_strlen3(str);
    printf("ret1:%d\nret2:%d\nret3:%d\n",ret1,ret2,ret3);
    return 0;
}
