#include <stdio.h>

////求10个整数的最大值
#include<stdio.h>
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9.0},i = 0,max = 0;
	for(i = 0; i < 10; i++)
	{
		if(arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("%d\n",max);
	getchar();
	return 0;
}
//
//
//将3个数从大到小输出
//#include<stdio.h>
//int main()
//{
//	int a = 6,b = 9,c = 2,t = 0;
//	printf("%d %d %d\n",a,b,c);
//	if(b > a)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	if(c > a)
//	{
//		t = a;
//		a = c;
//		c = t;
//	}
//	if(c > b)
//	{
//		t = b;
//		b = c;
//		c = t;
//	}
//	printf("%d %d %d\n",a,b,c);
//	getchar();
//	return 0;
//}
//
//
////求2个数的最大公约数
//#include<stdio.h>
//int main()
//{
//	int a = 16,b = 24,t = 0 ;
//	if(a < b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	while(b != 0)
//	{
//		t = a%b;
//		a = b;
//		b = t;
//	}
//	printf("最大公约数是：%d\n",a);
//	getchar();
//	return 0;
//}
