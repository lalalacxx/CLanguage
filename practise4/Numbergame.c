//猜数字游戏
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
	num = rand()%100+1;//1-100随机生成一个数
	while(1)
	{
		printf("请猜数字:>");
		scanf("%d", &input);
		if(input > num)
		{
			printf("猜大了\n");
		}
		else if(input<num)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
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
		printf("请选择:>");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	}
	while(input);
	return 0;
}