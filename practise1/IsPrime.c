//输出100-200之间的素数1
#include <stdio.h>
int main()
{
	int i = 0,count = 0;
	for(i = 101; i < 200; i += 2)
	{
		int j = 0;
		for(j = 2; j < i; j++)
		{
			if(i%j == 0)
				break;
		}
		if(j == i)
			count++;
			printf("%d  ",i);
	}
	printf("count=%d\n",count);
	getchar();
	return 0;
}
////输出100-200之间的素数2
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for(i=101; i<=200; i+=2)
//	{
//		int j = 0;
//		for(j = 2; j <= sqrt(i); j++)
//		{
//			if(i%j==0)
//				break;
//		}
//		if(j > sqrt(i))
//		{
//			count++;
//			printf("%d\n", i);
//		}
//	}
//	printf("count = %d\n", count);
//	getchar();
//	return 0;
//}

