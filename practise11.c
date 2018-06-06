//1.递归和非递归分别实现求第n个斐波那契数
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
//2.编写一个函数实现n^k,使用递归实现
#include<stdio.h>
int power(int n,int k)
{
	int result = 0;
	if(k == 0)
	{
		result = 1;
	}
	else
	{
		if(k == 1)
		{
			result = n;
		}
		else
		{
			result = n*power(n,k-1);
		}
	}
	return result;
}
int main()
{
	int n = 2,k = 4;
	int result = power(n,k);
	printf("%d的%d次方是：%d\n",n,k,result);
	system("pause");
	return 0;
}
//3.写一个递归函数DigitSum(n),输入一个非负整数，返回组成它的数字之和
//例如，调用DigitSum(1729)，则应该返回1+7+2+9,它的和是19
#include<stdio.h>
int DigitSum(int n)
{
	int  static sum = 0;
	if(n!=0)
	{
		sum += n%10;
		DigitSum(n/10);
	}
	return sum;
}
int main()
{
	int n = 1729;
	int d = DigitSum(n);
	printf("组成%d的数字之和为：%d\n",n,d);
	system("pause");
	return 0;
}
//4.编写一个函数reverse_string(char * string) (递归实现)
//实现: 将参数字符串中的字符反向排列。
//要求: 不能使用C函数库中的字符串操作函数。
#include<stdio.h>
#include<string.h>
void reverse_string(char *s,int min,int max)
{
	 int t;
	 if(min < max)
	 {
		 t = s[min];
		 s[min] = s[max];
		 s[max] = t;
		 reverse_string(s,min+1,max-1);
	 }
}
int main()
{
	int len;
	char s[] = "evol";
	len = strlen(s);
	reverse_string(s,0,len-1);
	puts(s);
	system("pause");
	return 0;
}
//5.递归和非递归分别实现strlen
//递归方法
#include<stdio.h>
int strlen(char *s)
{
	if(*s=='\0')
	{
		return 0;
	}
	else
	{
		return 1+strlen(s+1);
	}
}
int main()
{
	int ret;
	char  *s = "abcde";
	strlen(s);
	ret = strlen(s);
	printf("%d\n",ret);
	system("pause");
	return 0;
}
//非递归方法
#include<stdio.h>
int strlen(char s[])
{
	int count = 0;
	while(s[count]!='\0')
	{
		count++;
	}
	printf("%d\n",count);
	return 0;
}
int main()
{
	char  s[] = "abcde";
	strlen(s);
	system("pause");
	return 0;
}
//6.递归和非递归分别实现求n的阶乘
#include<stdio.h>
int factorial(int n)
{
	//递归方法
	/*if(n <= 1)
		return 1;
	else
		return n*factorial(n-1);*/
	//非递归方法
	int i = 0,m = 1;
	for(i = 2;i <= n;i++)
	{
		m = m*i;
	}
	return m;
}
int main()
{
	int n = 3;
	int f = factorial(n);
	printf("%d! = %d\n",n,f);
	system("pause");
	return 0;
}
//7.递归方式实现打印一个整数的每一位
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
