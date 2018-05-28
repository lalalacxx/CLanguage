//实现strcat（字符串拼接）
#include<stdio.h>
#include<assert.h>
#include<string.h>
char my_strcat(char *dest,char *src)
{
	char *ret = dest;
	assert(dest != NULL);
	assert(dest != NULL);
	while(*dest)//将dest指向目标字符串的最后一位加1处
	{
		dest++;
	}
	while(*dest = *src)//将源字符串一一赋给目标字符串\0往后
	{
		*dest = *src;
		dest++;
		src++;
	}
	return ret;//返回拼接后的字符串
}
int main()
{
	char arr1[100] = "abcd",arr2[20] = "1234";
	my_strcat(arr1,arr2);
	printf("%s\n",arr1);
	system("pause");
	return 0;
}