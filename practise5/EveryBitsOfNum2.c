//递归方式实现打印一个整数的每一位2
#include<stdio.h>
int print(n)
{
	if(n > 9)
	{
		print(n/10);
	}
	printf("%d ",n%10);
}
int main()
{
	int n = 12345;
	print(n);
	system("pause");
	return 0;
}