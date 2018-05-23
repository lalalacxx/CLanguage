//递归和非递归分别实现求第n个斐波那契数
#include<stdio.h>
int fib(int n)
{
	//递归方法
	/*if(n <= 2)
	{
		return 1;
	}
	else
	{
		return fib(n-1)+fib(n-2);
	}*/
	//非递归方法
	int result = 0,i = 0;
	if(n <= 2)
	{
		result = 1;
	}
	else
	{
		int a1 = 1,a2 = 1;
		while(n > 2)
		{
			result = a1+a2;
			a1 = a2;
			a2 = result;
			n--;
		}
	}
	return result;
}
int main()
{
	int n = 7;
	int f = fib(n);
	printf("第%d个斐波那契数是：%d\n",n,fib(n));
	system("pause");
	return 0;
}