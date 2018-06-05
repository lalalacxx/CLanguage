//使用可变参数，实现函数，求函数参数的最大值。
#include<stdio.h>
#include<stdarg.h>
int findMax(int n,...)
{
	va_list arg;
	int i = 0,M = 0;
	va_start(arg, n);
	for(i=0; i<n; i++)
	{
		int m = va_arg(arg,int);
		if(m > M)
		{
			M = m;
		}
	}
	return M;
	va_end(arg);
}
int main()
{
	int a = 1;
	int b = 3;
	int c = 6;
	int max = findMax(3, a, b,c);
	printf("max = %d\n", max); 
	system("pause");
	return 0;
}