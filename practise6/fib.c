//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
#include<stdio.h>
int fib(int n)
{
	//�ݹ鷽��
	/*if(n <= 2)
	{
		return 1;
	}
	else
	{
		return fib(n-1)+fib(n-2);
	}*/
	//�ǵݹ鷽��
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
	printf("��%d��쳲��������ǣ�%d\n",n,fib(n));
	system("pause");
	return 0;
}