//获取一个数二进制序列中所有的偶数位和奇数位，分别输出偶数序列和奇数序列
#include<stdio.h>
int main()
{
	int num = 0,i = 0;
	int arr[32];
	num = 68;
	for(;i < 32;i++)
	{
		arr[i] = num%2;
		num = num/2;
	}
	printf("偶数序列为：");
	for(i = 31;i >= 0;i -= 2)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
	printf("奇数序列为：");
	for(i = 30;i >= 0;i -= 2)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
	return 0;
}