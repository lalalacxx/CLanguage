//ÊµÏÖmemcpy£¨ÄÚ´æ¿½±´£©
#include<stdio.h>
#include<assert.h>
#include<string.h>
void *my_memcmp(void *dst,const void *src,int count)
{
	char *p = (char *)dst;
	char *q = (char *)src;

	assert(dst);
	assert(src);
	while(count--)
	{
		*p = *q;
		p++;
		q++;
	}
	return dst;
}

int main()
{
	char dst[100];
	char *src = "abcdefg";
	my_memcmp (dst,src,strlen(src)+1);
	system("pause");
	return 0;
}