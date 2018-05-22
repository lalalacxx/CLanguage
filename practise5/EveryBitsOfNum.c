//输出一个整数的每一位
#include<stdio.h>
int main()
{
	int num = 1234;
 	while(num)
 	{
 		printf("%d ", num%10);
 		num = num/10;
 	}
	getchar();
	return 0;
}