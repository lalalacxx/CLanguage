//判断一个字符串是否为另外一个字符串旋转之后的字符串
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
	printf("a2是a1旋转之后的字符串么？？？\n");
	if(result==1)
	{
		printf("a2是a1旋转之后的字符串\n");
	}
	if(result==0)
	{
		printf("a2不是a1旋转之后的字符串\n");
	}
	system("pause");
	return 0;
}