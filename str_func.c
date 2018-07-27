#include <stdio.h>
#include<assert.h>

//模拟实现strlen 求字符串长度
int my_strlen1(const char *str)
{
    int count = 0;
    while(*str != '\0')
    {
        count++;
        str++;
    }
    return count;
}
int my_strlen2(const char *str)
{
    if(*str == '\0')
        return 0;
    else
        return 1+my_strlen2(str+1);
}
int my_strlen3(char *str)
{
    char *s = str;
    while(*s != '\0')
    {
        s++;
    }
    return s-str;
}

//模拟实现strcpy  字符串拷贝
char *my_strcpy(char *dst,const char *src)
{
    assert(dst);
    assert(src);
    char *ret = dst;
    while(*dst && *src)
    {
        *dst = *src;
        dst++;
        src++;
    }
    return ret;
}

//模拟实现strcat  字符串连接
char *my_strcat(char *dst,const char *src)
{
    assert(dst);
    assert(src);
    char *ret = dst;
    //先找到dst的'\0'
    while(*dst++)
        ;
    //再把src的内容一一赋值给dst'\0'往后
    while(*dst && *src)
    {
        *dst = *src;
        src++;
        dst++;
    }
    return ret;
}

//模拟实现strstr  查找子串
char *my_strstr(const char *dst,const char *substr)
{
    assert(dst);
    assert(substr);
    char *ret = (char *)dst;
    char *cmp_tmp = (char *)dst;
    while(*ret != '\0')
    {
        cmp_tmp = ret;
        char *sub_tmp = (char *)substr;
        while(*cmp_tmp && *sub_tmp && (*cmp_tmp == *sub_tmp) )
        {
            cmp_tmp++;
            sub_tmp++;
        }
        if(*sub_tmp == '\0')
        {
            return ret;
        }
        else
            ret++;
    }
    return NULL;
}

//模拟实现strcmp  字符串比较
int my_strcmp(const char *str1,const char *str2)
{
    assert(str1);
    assert(str2);
    unsigned char *s1 = (unsigned char *)str1;
    unsigned char *s2 = (unsigned char *)str2;
    while(*str1 && *str2)
    {
        if(*s1 == *s2)
        {
            s1++,s2++;
        }
        else if(*s1 > *s2)
        {
            return 1;
        }
        else
            return -1;
    }
    //s1没走完，s2走完了，说明s1比s2长
    //即s1大
    if(*s1)
    {
        return 1;
    }
    //s2没走完，s1走完了，说明s1比s2短
    //即s2大
    else if(*s2)
    {
        return -1;
    }
    else return 0;
}

int main()
{
    return 0;
}
