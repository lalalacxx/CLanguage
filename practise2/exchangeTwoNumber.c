//交换两个值的内容1
#include<stdio.h>
int main()
{
	int a = 10,b = 20,c = 0;
	printf("a=%d,b=%d\n",a,b);
	c = a;
	a = b;
	b = c;
	printf("a=%d,b=%d\n",a,b);
	getchar();
	return 0;
}
//交换两个值的内容2
//#include<stdio.h>
//int main()
//{
//	int a = 10,b = 20;
//	printf("a=%d,b=%d\n",a,b);
//	a = a+b;
//	b = a-b;
//	a = a-b;
//	printf("a=%d,b=%d",a,b);
//	getchar();
//	return 0;
//}
//
//
