//0-999的水仙花数
#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0,count = 0,tmp = 0;
	for(i = 1;i <= 999;i++)
	{
		int sum = 0,count = 0;
		tmp = i;
		//判断i是一个几位数
		while(tmp)
		{
			count++;
			tmp = tmp/10;
		}
		tmp = i;
		//将i的组成数字的几次方相加
		while(tmp)
		{
			sum += pow((tmp%10),count);
			tmp = tmp/10;
		}
		//判断和是否与i相等
		if(sum == i)
		{
			printf("%d\n",i);
		}
	}
	getchar();
	return 0;
}
