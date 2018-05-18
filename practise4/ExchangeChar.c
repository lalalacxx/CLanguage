//一直接受键盘字符，小写字符转换大写字符输出，大写字符转换小写字符输出，数字不输出
#include<stdio.h>
int main()
{
	char zifu = 0;
	printf("请输入字符：",zifu);
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