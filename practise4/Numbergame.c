//��������Ϸ
#include<stdio.h>
#include <stdlib.h>
void menu()
{
	printf("*************************\n");
	printf("*** 1.play    0.exit  ***\n");
	printf("*************************\n");
}
void game()
{
	int num = 0;
	int input = 0;
	num = rand()%100+1;//1-100�������һ����
	while(1)
	{
		printf("�������:>");
		scanf("%d", &input);
		if(input > num)
		{
			printf("�´���\n");
		}
		else if(input<num)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	}
	while(input);
	return 0;
}