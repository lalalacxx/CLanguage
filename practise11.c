//1.�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
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
//2.��дһ������ʵ��n^k,ʹ�õݹ�ʵ��
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
	printf("%d��%d�η��ǣ�%d\n",n,k,result);
	system("pause");
	return 0;
}
//3.дһ���ݹ麯��DigitSum(n),����һ���Ǹ����������������������֮��
//���磬����DigitSum(1729)����Ӧ�÷���1+7+2+9,���ĺ���19
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
	printf("���%d������֮��Ϊ��%d\n",n,d);
	system("pause");
	return 0;
}
//4.��дһ������reverse_string(char * string) (�ݹ�ʵ��)
//ʵ��: �������ַ����е��ַ��������С�
//Ҫ��: ����ʹ��C�������е��ַ�������������
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
//5.�ݹ�ͷǵݹ�ֱ�ʵ��strlen
//�ݹ鷽��
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
//�ǵݹ鷽��
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
//6.�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�
#include<stdio.h>
int factorial(int n)
{
	//�ݹ鷽��
	/*if(n <= 1)
		return 1;
	else
		return n*factorial(n-1);*/
	//�ǵݹ鷽��
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
//7.�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
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
