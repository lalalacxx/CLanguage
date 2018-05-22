//写一个函数返回参数的二进制中1的个数
#include<stdio.h>
#include<stdlib.h>
int count_one_bits(int n)
{
	int count = 0;
	while(n)
	{
		if(n%2 == 1)
		{
			count++;
		}
		n = n/2;
	}
	return count;
}
int main()
{
	int n = 9;
    int ret = ret = count_one_bits(n);
	printf("%d\n",ret);
    getchar();
    return 0;
}