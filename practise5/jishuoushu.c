//��ȡһ�������������������е�ż��λ������λ���ֱ����ż�����к���������
#include<stdio.h>
int main()
{
	int num = 0,i = 0;
	int arr[32];
	num = 68;
	for(;i < 32;i++)
	{
		arr[i] = num%2;
		num = num/2;
	}
	printf("ż������Ϊ��");
	for(i = 31;i >= 0;i -= 2)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
	printf("��������Ϊ��");
	for(i = 30;i >= 0;i -= 2)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
	return 0;
}