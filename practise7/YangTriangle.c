//打印杨辉三角
#include<stdio.h>
#define n 10
int main()
{
	int arr[n][n] = {0};
	int i = 0,j = 0;
	for(i = 0;i < n;i++)
	{
		for(j = 0;j <= i;j++)
		{
			if(i == j || j == 0)
			{
				arr[i][j] = 1;
                arr[i][0] = 1;
			}
			else
			{
				arr[i][j] = arr[i-1][j] + arr[i-1][j-1];
			}
		}
	}
	for(i = 0;i < n;i++) 
	{ 
		//空格打印
		int k = 0;
		for(k = 0;k < n-i-1;k++)
		{
			printf("%3c",' ');
		}
		for (j = 0;j <= i;j++)
		{ 
			printf("%6d",arr[i][j]); 
		}
		printf("\n"); 
	}
	getchar();
	return 0;
}
