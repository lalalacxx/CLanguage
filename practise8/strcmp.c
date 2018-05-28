//实现strcmp（字符串比较）
#include<stdio.h>
#include<assert.h>
#include<string.h>
const char my_strcmp(const char *str1,const char *str2)
{
	unsigned char *s1 = (unsigned char *)str1;
	unsigned char *s2 = (unsigned char *)str2;
	assert(str1);
	assert(str2);
	while(*s1 && *s2)
	{
		if(*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else if(*s1 < *s2)
		{
			return -1;
		}
		else
		{
			return 1;
		}
	}
	if(*s1)
	{
		return 1;
	}
	else if(*s2)
	{
		return -1;
	}
	else
		return 0;
}

int main()
{
	const char *str1 = "abcd1234";
	const char *str2 = "aad1";
	int  ret = my_strcmp(str1,str2);
	if(ret == 0)
	{
		printf("str1 等于 str2\n");
	}
	else if(ret < 0)
	{
		printf("str1 小于 str2\n");
	}
	else
	{
		printf("str1 大于 str2\n");
	}
	system("pause");
	return 0;
}