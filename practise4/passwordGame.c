//模拟三次密码输入
#include<stdio.h>
#include<string.h>
int main()
{
	int i = 0;
	char password[10] = {0};
	for(i = 1; i <= 3; i++)
	{
		printf("请输入密码: ");
		scanf("%s", password);
		if(strcmp(password, "961120") == 0)
		{
			break;
		}
	}
	if(i == 3)
		printf("登录失败，退出系统\n");
	else if(i<3)
		printf("登录成功\n");
	return 0;
}