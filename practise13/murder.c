//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ�
//��һ��������Ϊ4�����ɷ��Ĺ��ʡ�
//A˵: �����ҡ�
//B˵: ��C��
//C˵: ��D.
//D˵: C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�
#include<stdio.h>
int main()
{
	char killer = 0;
	for(killer = 'a';killer <= 'd';killer++)
	{
		if((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') ==3)
		{
			printf("�����ǣ�%c\n",killer);
		}
	}
	getchar();
	return 0;
}