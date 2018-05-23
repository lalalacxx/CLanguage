//Ä£ÄâÊµÏÖstrcpy
#include<stdio.h>
#include<string.h>
#include <cassert>
char my_strcpy(char *dest,char *src)
{
	char *ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	while((*dest = *src))
	{
		*dest = *src;
		dest++;
		src++;
	}
	return ret;
}
int main()
{
	char arr1[100],arr2[20] = "1234abcd12341234123";
	my_strcpy(arr1,arr2);
	printf("%s\n", arr1);
	system("pause");
	return 0;
}