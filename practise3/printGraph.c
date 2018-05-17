//打印*
#include<stdio.h>
int main()
{
	int line = 7,i = 0;
	for(i = 0;i < line;i++)
	{
		int j = 0;
		for(j = 0;j < line-1-i;j++)         //空格打印
		{printf("%c",' ');
		}
		for(j = 0;j < 2*i+1;j++)            //*打印
		{
			printf("*");
		}
		printf("\n");
	}
	for(i = 0;i < line-1;i++)
	{
		int j = 0;
		for(j = 0;j <= i;j++)              //空格打印
		{
			printf("%c",' ');
		}
		for(j = 0;j < 2*(line-1-i)-1;j++)  //*打印
		{
			printf("*");
		}
		printf("\n");
	}
	getchar();
	return 0;
}
