//�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ���
#include<stdio.h>
#include<string.h>
int reverse(char a1[],char a2[],int len)
{
	int i=0;
	while(len)
	{
		char first=a1[0];
		for(i=0;i<len-1;i++)
		{
			a1[i]=a1[i+1];
		}
		a1[len-1]=first;
		if(strcmp(a1,a2)==0)
	    {
			return 1;
		    len--;
		}
		if(len==0)
		{
			return 0;
		}
	}
}
int main(){
	char a1[]="abcde";
	char a2[]="deabc";
	int result=reverse(a1,a2,strlen(a1));
	printf("a2��a1��ת֮����ַ���ô������\n");
	if(result==1)
	{
		printf("a2��a1��ת֮����ַ���\n");
	}
	if(result==0)
	{
		printf("a2����a1��ת֮����ַ���\n");
	}
	system("pause");
	return 0;
}