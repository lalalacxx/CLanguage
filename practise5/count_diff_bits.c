//����int��32λ������m��n�Ķ����Ʊ��ʽ�У��ж��ٸ�λ��ͬ
#include<stdio.h>
int count_one_bits(int n)
{
	int count = 0;
	while(n)
	{
		if(n%2 == 1)
		{
			count++;
		}
		n = n/2;
	}
	return count;
}
int main()
{
	int m = 1999;
	int n = 2299;
	int tmp = m^n;
	int ret = 0;
	ret = count_one_bits(tmp);
	printf("ret = %d\n", ret);
	return 0;
}