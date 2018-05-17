//计算Sn=a+aa+aaa+aaaa+aaaaa(a为一个数，如2+22+222+2222+22222)
#include<stdio.h>
int main()
{
	int a = 2,sum = 0,i = 0,n = 5,tmp = 0;
	for(i = 1;i <= n;i++)
	{
		tmp = tmp*10+a;
		sum += tmp;
	}
	printf("sum = %d\n",sum);
	getchar();
	return 0;
}
