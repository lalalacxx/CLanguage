#include <stdio.h>
#include<assert.h>
#include<stdlib.h>



char *reverse(char *s)
{
    assert(s);
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
    return s;
}
char *myitoa(int num)
{
    int i = 0;
    int flag = 1;
    char s[100];
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
    char *res = reverse(s);
    return res;
}

int main()
{
    int a = 123;
    int b = -123;
    char *s1 = myitoa(a);
    printf("123->%s\n",s1);
    char *s2 = myitoa(b);
    printf("-123->%s\n",s2);
    return 0;
}
