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
    do
    {
        s[i++] = num%10+'0';
        num = num/10;
    }
    while(num > 0);
    if(flag == -1)
    {
        s[i++] = '-';//加上负号
    }
    s[i] = '\0';//加上字符串的'\0'
    //加入要转化的数字是-123，则走到这一不已经转化为321-
    //此时再将321-逆置就可以了
    char *res = reverse(s);
    return res;
}

int main()
{
    int a = 123;
    int b = -123;
    char *res1 = myitoa(a);
    char *res2 = myitoa(b);
    printf("123->%s\n",res1);
    printf("-123->%s\n",res2);
    printf("123->%s\n",myitoa(a));
    printf("-123->%s\n",myitoa(b));
    return 0;
}
