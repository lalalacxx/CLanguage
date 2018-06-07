//×Ö·û´®×óÐý
#include<stdio.h>
#include<string.h>
void left(char a[],int k,int sz)
{
	int i=0;
	while(k)
	{
		char first=a[0];
		for(i=0;i<sz-1;i++)
		{
			a[i]=a[i+1];
		}
		a[sz-1]=first;
		k--;
	}
	for(i=0;i<sz;i++)
	{
		printf("%c",a[i]);
	}
}
int main()
{
	char a[]="ABCDE";
	int sz = sizeof(a)/sizeof(a[0]);
	int k=0;
	printf("ÇëÊäÈëÊýk: ",k);
	scanf("%d",&k);
	left(a,k,sz);
	system("pause");
	return 0;
}