//ģ��������������
#include<stdio.h>
#include<string.h>
int main()
{
	int i = 0;
	char password[10] = {0};
	for(i = 1; i <= 3; i++)
	{
		printf("����������: ");
		scanf("%s", password);
		if(strcmp(password, "961120") == 0)
		{
			break;
		}
	}
	if(i == 3)
		printf("��¼ʧ�ܣ��˳�ϵͳ\n");
	else if(i<3)
		printf("��¼�ɹ�\n");
	return 0;
}