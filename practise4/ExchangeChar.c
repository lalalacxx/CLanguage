//һֱ���ܼ����ַ���Сд�ַ�ת����д�ַ��������д�ַ�ת��Сд�ַ���������ֲ����
#include<stdio.h>
int main()
{
	char zifu = 0;
	printf("�������ַ���",zifu);
	scanf("%c",&zifu);
	while((zifu=getchar())!=EOF)
	{
		if(zifu >= 'a' && zifu <= 'z')
		{
			printf("%c\n",zifu-32);
		}
		else if(zifu >= 'A' && zifu <= 'Z')
		{
			printf("%c\n",zifu+32);
		}
		if(zifu >= 0 && zifu <= 9)
			{
				break;
			}
	}
	return 0;
}