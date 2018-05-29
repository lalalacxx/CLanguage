// µœ÷memmove
#include<stdio.h>
#include<assert.h>
#include<string.h>
void my_memmove(void *dst,const void *src,int count)
{
	char *p =(char *)dst;
	char *q =(char *)src;
	assert(dst);
	assert(src);
	if(q < p && q+count > p)
	{
		*p = p+count-1;
		*q = q+count-1;

		while(count--)
		{
			*p = *q;
			p--,q--;
		}
	}
	else
	{
		while(count--)
		{
			*p = *q;
			p++,q++;
		}
	}
}

int main()
{
	char dst[20];
	char src[20] = "abcdefg";
	my_memmove(src+1,src,strlen(src)+1);
	system("pause");
	return 0;
}