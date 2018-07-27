#include <stdio.h>
#include<string.h>
#include<assert.h>

void *my_memcpy(void *dst,const void *src,int count)
{
    assert(dst);
    assert(src);
    char *p = (char *)dst;
    char *q = (char *)src;
    while(count--)
    {
        *p = *q;
        p++;
        q++;
    }
    return dst;
}
void *my_memmove(void *dst,const void *src,int count)
{
    assert(dst);
    assert(src);
    char *dst_p = (char*)dst;
    char *src_p = (char*)src;
    if(src_p < dst_p && (src_p+count) > dst_p)
    {
        dst_p = dst_p+count-1;
        src_p = src_p+count-1;
        while(count--)
        {
            *dst_p = *src_p;
            dst_p--,src_p--;
        }

    }
    else
    {
        while(count--)
        {
            *dst_p = *src_p;
            dst_p++,src_p++;
        }
    }
    return dst;
}
int main()
{
    char buf[32];
    char *msg = "hello world";
    my_memcpy(buf,msg,strlen(msg)+1);
    printf("%s\n",buf);
    
    int b[32];
    int a[] = {1,2,3,4};
    my_memcpy(b,a,sizeof(a));
    int i = 0;
    for(i = 0;i < 4;i++)
    {
        printf("%d ",b[i]);
    }
    printf("\n");


    char msg2[64] = "hello world";
    char buf2[64]; 
    my_memmove(buf2,msg2,strlen(msg2)+1);
    printf("%s\n",buf);
    my_memmove(msg2+1,msg2,strlen(msg2)+1);
    printf("%s\n",msg2);
}
