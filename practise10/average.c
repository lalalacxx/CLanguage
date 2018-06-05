//使用可变参数，实现函数，求函数参数的平均值。
#include<stdio.h>
#include<stdarg.h>
int average(int n,...)
{
	va_list arg;
	int i = 0;
	int sum = 0;
	va_start(arg, n);
	for(i=0; i<n; i++)
	{
		sum += va_arg(arg, int);
	}
	return sum/n;
	va_end(arg);
}
int main()
{
	int a = 1;
	int b = 3;
	int avg = average(2, a, b);
	printf("avg = %d\n", avg);
	system("pause");
	return 0;
}