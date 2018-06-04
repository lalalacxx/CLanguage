#include <stdio.h>
#include <string.h>

char *replace_blank(char *str)
{
    //先计算出空格数
    int count = 0;
    char *ptr = str;
    while(*ptr)
    {
        if(*ptr == ' ')
        {
            count++;
        }
        ptr++;
    }
    //再移动字符串
    int len = strlen(str);
    int old_end = len;
    int new_end = len + 2*count;
    while(old_end != new_end)
    {
        if(str[old_end] == ' ')
        {
            //是空格
            str[new_end--] = '0';
            str[new_end--] = '2';
            str[new_end--] = '%';
            old_end--;
        }
        //不是空格
        else
        {
            str[new_end--] = str[old_end--];
        }
    }//当old_end和new_end相遇时循环结束
    return str;
}
int main()
{
    char str[1000];
    fgets(str,20,stdin);
    replace_blank(str);
    printf("%s\n",str);
    return 0;
}
