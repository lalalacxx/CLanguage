#include <stdio.h>
int check1()
{
    int i = 1;
    return (*(char*)&i);
}
int check2()
{
    union
    {
        int i;
        char c;
    }un;
    un.i = 1;
    return un.c;
}
int main()
{
    int res = check1();
    //int res = check2();
    if(res == 1)
    {
        printf("小端\n");
    }
    else
    {
        printf("大端\n");
    }
}
