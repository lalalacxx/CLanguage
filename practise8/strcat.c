//ʵ��strcat���ַ���ƴ�ӣ�
#include<stdio.h>
#include<assert.h>
#include<string.h>
char my_strcat(char *dest,char *src)
{
	char *ret = dest;
	assert(dest != NULL);
	assert(dest != NULL);
	while(*dest)//��destָ��Ŀ���ַ��������һλ��1��
	{
		dest++;
	}
	while(*dest = *src)//��Դ�ַ���һһ����Ŀ���ַ���\0����
	{
		*dest = *src;
		dest++;
		src++;
	}
	return ret;//����ƴ�Ӻ���ַ���
}
int main()
{
	char arr1[100] = "abcd",arr2[20] = "1234";
	my_strcat(arr1,arr2);
	printf("%s\n",arr1);
	system("pause");
	return 0;
}