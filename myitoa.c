#include <stdio.h>
#include<assert.h>
#include<stdlib.h>

char *reverse(char *s)
{
    assert(s);
//    char *str = s;
    char *head = s;
    char *tail = s;
    while(*tail != '\0')
        tail++;//此时tail已经走到了'\0'的位置
    tail--;//因此循环结束以后经tail往后移动一个
    while(head < tail)
    {
        char tmp = *head;
        *head++ = *tail;
        *tail-- = tmp;
    }
    //s = str;
    return s;
}
char *myitoa(int num,char *s)
{
    int i = 0;
    int flag = 1;
    if(num < 0)
    {
        num = -num;//先将其转化为正数
        flag = -1;//记录该数原本应该是一个负数
    }
    while(num > 0)
    {
        s[i++] = num%10+'0';
        num = num/10;
    }
    if(flag == -1)
    {
        s[i++] = '-';//加上负号
    }
    s[i] = '\0';//加上字符串的'\0'
    //假如要转化的数字是-123，则走到这一步已经转化为"321-"
    //此时再将"321-"逆置就可得到"-123"
    reverse(s);
    return s;
}

int main()
{
    int a = 123;
    int b = -123;
    char s1[255];
    char s2[255];
    myitoa(a,s1);
    myitoa(b,s2);
    printf("123->%s\n",s1);
    printf("-123->%s\n",s2);
    return 0;
}
