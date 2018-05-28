//ÊµÏÖstrcpy(×Ö·û´®¿½±´)
#include<stdio.h>
#include<string.h>
#include<assert>
char my_strcpy(char *dest,char *src)
{
	char *ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	while(*dest = *src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return ret;
}
int main()
{
	char dest[100] = {0},src[10] = "abcd1234";
	my_strcpy(dest,src);
	printf("%s\n",dest);
	system("pause");
	return 0;
}